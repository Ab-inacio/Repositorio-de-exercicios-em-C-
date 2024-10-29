#include <stdio.h> 

int soma (int n) {
    
    if (n == 1) {
        return 1; 
    } else {
        return n + soma (n - 1); 
    }
    
}

int main () {

int numero; 

printf ("Digite um número inteiro positivo: ");
scanf ("%d", &numero);

if (numero > 0) {
    int resultado = soma (numero);
    printf ("A soma de 1 até %d é: %d\n", numero, resultado); 
} else {
  printf("Digite um numero inteiro positivo, por favor.\n");
}

return 0;
}
