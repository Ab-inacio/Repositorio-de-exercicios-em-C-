#include <stdio.h> 

  int main () {
      
      float peso, excesso = 0.0, multa = 0.0;
      const float limite_peso = 50.0; 
      const float preco_multa = 4.0; 
      
      printf ("Digite quantos kg de peixe foram pescados hoje: ");
      scanf ("%f", &peso); 
      
      if (peso > limite_peso) { 
        excesso = peso - limite_peso; 
        multa = excesso * preco_multa;
        
        printf ("O valor da multa é de: %.2f\n", multa); 
      }
      else {
          printf ("Não será necessário pagar multa.\n"); 
      }
        
    return 0; 
      
      
      
  }