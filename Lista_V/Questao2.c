#include <stdio.h>

void gerar_pa (int array[], int quantidade, int valor_inicial, int razao) {
    for (int i = 0; i < quantidade; i++) {
        array[i] = valor_inicial + i * razao; 
    }
}

void imprimir_array (int array[], int quantidade) {
    printf ("Elementos do array: ");
    for (int i = 0; i < quantidade; i++) {
        printf ("%d ", array[i]);
}
printf ("\n");
}

int main () {
    int quantidade, valor_inicial, razao;
    int array[100];
    
    printf ("Digite a quantidade de elementos do array (maximo 100): ");
    scanf ("%d", &quantidade);
    
    if (quantidade > 100) {
        printf ("A quantidade digitada é maior do que o limite maximo (100).\n");
    return 1;
    }
    
    printf("Digite o valor inicial: ");
    scanf ("%d", &valor_inicial);
    printf ("Digite a razao: ");
    scanf ("%d", &razao);
    
    gerar_pa (array, quantidade, valor_inicial, razao);
    imprimir_array (array, quantidade);
    
    return 0;
}
