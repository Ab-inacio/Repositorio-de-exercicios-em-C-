#include <stdio.h> 

int main () {
    
    int i, j, indiceMaior, temp;
    int notas[8] = {2, 9, 5, 7, 3, 8, 6, 10}; 
    int tamanho = 8;
    
    printf ("Notas fora de ordenação: ");
    for (i = 0; i < tamanho; i++) {
        printf ("%d ", notas[i]);
    }
    printf ("\n");
    
    for (i = 0; i < tamanho - 1; i++) {
        indiceMaior = i;
    for (j = i + 1; j < tamanho; j++) {
        if (notas[j] > notas[indiceMaior]) {
            indiceMaior = j;
        }
    }
    
    temp = notas[indiceMaior];
    notas[indiceMaior] = notas[i];
    notas[i] = temp;
    }
    
    printf ("Notas em ordem decrescente: ");
    for (i = 0; i < tamanho; i++) {
        printf ("%d ", notas[i]);
    }
    printf ("\n");
    
    return 0; 
}