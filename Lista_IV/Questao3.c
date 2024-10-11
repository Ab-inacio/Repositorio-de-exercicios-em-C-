#include <stdio.h> 

int main () {
    
int n; 
int i, j, chave;

printf ("Digite o numero de preços para ordenação: ");
scanf ("%d", &n);

float preços[n];

for (i = 0; i < n; i++) {
    printf ("Digite o preço do produto %d: ", i + 1);
    scanf ("%f", &preços[i]);
}

for (i = 1; i < n; i++) {
    float chave = preços[i];
    j = i - 1;
    
while (j >= 0 && preços[j] > chave) {
    preços[j + 1] = preços[j];
    j = j - 1;
}
    preços[j + 1] = chave; 
}

printf ("\nLista de preços ordenados: \n");

for (int i = 0; i < n; i++) {
    printf ("%.2f ", preços[i]);
}

printf ("\n");

return 0;
}
