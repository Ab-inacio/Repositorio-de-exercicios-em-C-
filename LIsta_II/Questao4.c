#include <stdio.h>

int main() {
    
    int primos[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 
                    59, 61, 67, 71, 73, 79, 83, 89, 97};
    int n = sizeof(primos) / sizeof(primos[0]); 

    int numero;
    printf("Digite um número inteiro entre 1 e 100: ");
    scanf("%d", &numero);
    
    if (numero < 1 || numero > 100) {
        printf("Número fora do intervalo permitido.\n");
        return 0;
    }
    
    int esquerda = 0;
    int direita = n - 1;
    int comparacoes = 0;
    int encontrado = -1;
    
    while (esquerda <= direita) {
        comparacoes++;
        int meio = (esquerda + direita) / 2;

        if (primos[meio] == numero) {
            encontrado = meio;  
            break;
        }

        if (primos[meio] < numero) {
            esquerda = meio + 1;  
        } else {
            direita = meio - 1;
        }
    }
    
    if (encontrado != -1) {
        printf("O número %d é primo.\n", numero);
    } else {
        printf("O número %d não é primo.\n", numero);
    }

    printf("Número de comparações: %d\n", comparacoes);

    return 0;
}
