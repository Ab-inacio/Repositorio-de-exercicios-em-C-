#include <stdio.h> 

int main () {
    
    int n = 100; 
    int contas [100]; 
    
    for (int i = 0; i < n; i++) {
        contas[i] = 1 + i;  
    } 
    
    int conta_procurada;
    printf("Digite o número da conta que deseja verificar: ");
    scanf("%d", &conta_procurada);
    
    int esquerda = 0;
    int direita = n - 1;
    int comparacoes = 0;
    int encontrado = -1; 
    
    while (esquerda <= direita) {
        comparacoes++;
        int meio = (esquerda + direita) / 2;

        if (contas[meio] == conta_procurada) {
            encontrado = meio;  
            break;
        }

        if (contas[meio] < conta_procurada) {
            esquerda = meio + 1;  
        } else {
            direita = meio - 1; 
        }
    }
    
    if (encontrado != -1) {
        printf("Conta %d encontrada na posição %d.\n", conta_procurada, encontrado);
    } else {
        printf("Conta %d não está ativa.\n", conta_procurada);
    }

    printf("Número de comparações: %d\n", comparacoes);
    
    return 0;
}
