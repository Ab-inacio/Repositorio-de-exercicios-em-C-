#include <stdio.h> 

int mcd (int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mcd (b, a % b);
    }
}

int main () {
    
    int num1, num2; 
    
    printf ("Digite dois números inteiros positivos: ");
    scanf ("%d %d", &num1, &num2);
    
    if (num1 <= 0 || num2 <= 0) {
        printf ("Insira numeros inteiros positivos, por favor.\n");
        return 1;
    }
    
    int resultado = mcd (num1, num2);
    printf ("O mcd de %d e %d é: %d\n", num1, num2, resultado);
    
    return 0;
}
