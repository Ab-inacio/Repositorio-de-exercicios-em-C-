#include <stdio.h> 

int busca_binaria_recursiva (int array[], int inicio, int fim, int valor_procurado) {

if (inicio > fim) {
    return -1; 
} 

int meio = inicio + (fim - inicio) / 2;

if (array[meio] == valor_procurado) {
    return meio;
}

else if (valor_procurado < array[meio]) {
    return busca_binaria_recursiva (array, inicio, meio - 1, valor_procurado);
} else {
    return busca_binaria_recursiva (array, meio + 1, fim, valor_procurado);
}
}

int main () {
    
    int array[] = {5, 13, 21, 25, 32, 40, 56, 70};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int valor_procurado;
    
    printf ("Digite um valor para ser procurado: ");
    scanf ("%d", &valor_procurado);
    
    int resultado = busca_binaria_recursiva (array, 0, tamanho - 1, valor_procurado);
    
    if (resultado != -1) {
        printf ("Elemento encontrado na posição: %d", resultado);
    } else {
        printf ("O elemento não foi encontrado no array.\n");
    }
    
    return 0;
}
