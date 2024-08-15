#include <stdio.h> 
#include <math.h>

int main () { 
    
    float num1, num2;
    
    printf ("Digite o primeiro numero: "); 
    scanf ("%f", &num1);
    
    printf ("Digite o segundo numero: "); 
    scanf ("%f", &num2);
    
    float produto = num1 * 2;
    
    printf ("O produto do dobro do primeiro numero é: %.2f\n", produto); 
    
    float triplo = num1 * 3;
    float metade = num2 / 2;
    float soma = triplo + metade; 
    
    printf ("A soma do triplo com a metade é: %.2f\n", soma); 
    
    float soma_raiz = num1 + num2; 
    float raiz = sqrt (soma_raiz); 
    
    printf ("A raiz da soma é: %.2f\n", raiz);
    
    return 0; 
    
}