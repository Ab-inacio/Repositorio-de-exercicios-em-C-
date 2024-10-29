#include <stdio.h> 

int fibonacci (int n) {
    if (n == 0) {
        return 0;  
    } else if (n == 1) {
        return 1; 
    } else { 
        return fibonacci (n - 1) + fibonacci (n - 2); 
}
} 

int main () {
    int n;
    
    printf ("Digite um valor inteiro positivo: ");
    scanf ("%d", &n);
    
    if (n < 0) {
       printf ("Digite um numero inteiro positivo, por favor.\n");
       return 1; 
    }
    int resultado = fibonacci (n);
    printf ("O %d-ésimo termo da sequencia de fibonacci é: %d\n", n, resultado);

return 0; 

}
