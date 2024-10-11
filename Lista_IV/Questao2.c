#include <stdio.h> 

int main () {
    
    int numero; 
    
    printf ("Digite um numero inteiro positivo: ");
    scanf ("%d", &numero);
    
    if (numero <= 0) {
        printf ("O numero precisa ser positivo.\n");
    }   else {
        printf ("Numeros pares entre 1 e %d\n:", numero);
        
    }    for (int i = 2; i <= numero; i += 2) {
        printf ("%d ", i);
        }
    
        
    
    
    return 0; 
}
