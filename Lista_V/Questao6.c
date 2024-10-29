#include <stdio.h>

int maior_numero (int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main () {
    
    int num1, num2, num3;
    
    printf ("Digite 3 números inteiros positivos: ");
    scanf ("%d %d %d", &num1, &num2, &num3);
    
     if (num1 <= 0 || num2 <= 0 || num3 <= 0) {
        printf ("Insira numeros inteiros positivos, por favor.\n");
        return 1;
    }
    
    int maior = maior_numero (num1, num2, num3);
    printf ("O maior número é: %d\n", maior);
    
    return 0;
}