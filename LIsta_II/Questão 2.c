#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

int main () {
    
    int num_criancas = 50;
    int nota_min = 1;
    int nota_max = 5;
    int notas [50];
    int frequencia[5] = {0};
    int i, j;
    
    srand (time(NULL));
    
    for (i = 0; i < num_criancas; i++) {
        notas[i] = (rand() % nota_max) + nota_min;
        
    } 
   printf ("Notas dadas pelas crianças:\n"); 
   for (i = 0; i < num_criancas; i++) {
        printf("%d ", notas[i]);
    }
    printf("\n"); 
    
    for (j = nota_min; j <= nota_max; j++) {
        for (i = 0; i < num_criancas; i++) {
            if (notas[i] == j) {
                frequencia[j - 1]++;
            }
        }
    }
      printf("\nFrequência de cada nota:\n");
    for (i = nota_min; i <= nota_max; i++) {
        printf("Nota %d: %d vezes\n", i, frequencia[i - 1]);
    }

    return 0;
}
