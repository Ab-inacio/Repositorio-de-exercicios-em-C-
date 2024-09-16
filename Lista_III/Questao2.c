#include <stdio.h>

int main() {

    int array[] = {20, 14, 35, 29, 64, 33};
    int n = 6; 
    int i, j, temp;
    int troca;
    
    printf ("Array original: \n");
    for (i = 0; i < n; i++) {
        printf ("%d " ,array[i]);
    }
    printf ("\n");
    
    for (i = 0; i < n - 1; i++) {
        troca = 0;
        
    for (j = 0; j < n - 1 - i; j++) {
        if (array[j] > array[j + 1]) {
        temp = array[j];
        array[j] = array [j + 1];
        array [j + 1] = temp;
        troca = 1;
        }
    }
        if (troca == 0) {
        break;
    }
    }
    printf ("Array ordenado: \n");
    for (i = 0; i < n; i++) {
        printf ("%d ", array[i]);
    }
    
    printf ("\n");
    
    
    return 0;
}

