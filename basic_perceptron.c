  /*=========================================================

  Title: Basic Perceptron in language C
  Date: 5/5/2022
  Autor: Guilherme Pedroso de Lima

  =========================================================*/


  #include <stdio.h>
  
  float activation_function(int xi1, float wi1, int xi2, float wi2, int xi3, float wi3)
  {
    float sum = ((xi1 * wi1)+(xi2*wi2)+(xi3*wi3));

    return(sum);
  }


  int step_function(float sum)
  {
    if(sum >= 1)
      {
       return(1);
      }
    else
      {
       return(0);
      }
  }

  int main()
  {
    int input1 = 1, input2 = 7, input3 = 5, saida;
    float weight1 = 0.8, weight2 = 0.1, weight3 = 0;
    float sum;

    sum = activation_function(input1, weight1, input2, weight2, input3, weight3);
    saida = step_function(sum);
    

    printf("\nOutput: %d", saida);

    getchar();
  
  
   return(0);
  }
