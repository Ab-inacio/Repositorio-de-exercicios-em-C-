
#include <stdio.h> 

int main () {
    
int i, j, n, valor, inicio, meio, fim, encontrado = 0;

printf ("Digite o número de elementos: ");
scanf ("%d", &n);

int array[n];

printf ("Digite %d números inteiros:\n", n);
for (i = 0; i < n; i++){
    scanf ("%d", &array[i]);
}

for (i = 0; i < n - 1; i++) {
    int minimo = i;
for (j = i + 1; j < n; j++) {
    if (array[j] < array[minimo]) {
        array[minimo] = j; 
    }
}

int temp = array[minimo];
array [minimo] = array[i];
array[i] = temp;

printf ("Digite o valor que deseja encontrar: ");
scanf ("%d", &valor);

inicio = 0;
fim = n - 1;

while (inicio <= fim) {
    meio = (inicio + fim) / 2;
    
    if (array[meio] == valor) {
    printf ("Valor %d encontrado na posição %d.\n", valor, meio);
    
    encontrado = 1;
    break; 
    }
    
    else if (array[meio] < valor) {
        inicio = meio + 1;
    } 
    
    else {
        fim = meio - 1;
    }
}

if (!encontrado) {
    printf ("O valor %d não foi encontrado na lista.\n", valor);
}
return 0;
}
}