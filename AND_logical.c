  /*=========================================================

  Title: Perceptron in language C (Activation Function with 
  AND logic)
  Date: 18/5/2022
  Autor: Guilherme Pedroso de Lima

  =========================================================*/

  #include <stdio.h>

  int activation_function(int xi1, int xi2, int wi1, int wi2)
    {
    int sum;
    sum = ((xi1 * wi1)+(xi2 * wi2));
    return sum;
    } 
      
  int AND_logic_function(int sum)       
    {   
    if(sum > 0)
      {
      return(1);
      }
   else 
     {
     return(0);
     }
    }

  void truth_table()
    {
    int table[4][3] = {0,0,0,
                       0,1,0,
                       1,0,0,
                       1,1,1};

   printf("\nAND truth table\n");

   for(int i = 0; i < 4; i++)
     {
     printf("\n");     
     for(int j = 0; j < 3; j++)
       {
          printf("%d |", table[i][j]);
       }    
     }
    printf("\n");
    }

  int main()
    {
    int x1 = 0, x2 = 0, w1 = 0, w2 = 0;
    int v_aux, show;

    truth_table();
    printf("\nNeural Network: \n\n");

    v_aux = activation_function(x1,x2, w1,w2);
    show = AND_logic_function(v_aux);
    printf("%d\n", show);
    
    // x1 = 0 and x2 = 1
    
    x2 = 1; 
    v_aux = activation_function(x1,x2, w1,w2);
    show = AND_logic_function(v_aux);
    printf("%d\n", show);
    
    // x1 = 1 and x2 = 0  
    
    x1 = 1; 
    x2 = 0;
    v_aux = activation_function(x1,x2, w1,w2);
    show = AND_logic_function(v_aux);
    printf("%d\n", show);

    // x1 = 1 and x2 = 1
   
    x2 = 1;   
    v_aux = activation_function(x1,x2, w1,w2);
    show = AND_logic_function(v_aux);
    printf("%d\n", show);

    getchar();
    return(0);
    }
