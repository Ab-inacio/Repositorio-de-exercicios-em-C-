#include <stdio.h>

int main () {
    
    float custo_fabrica, distribuidor = 0.28, impostos = 0.45, valor_final;
    
    printf ("Digite o custo de fabrica do carro: ");
    scanf ("%f", &custo_fabrica); 
    
    distribuidor = custo_fabrica * distribuidor;
    impostos = custo_fabrica * impostos;
    valor_final = custo_fabrica + distribuidor + impostos; 
    
    printf ("O valor final do carro é de: %.2f\n", valor_final); 
    
    return 0; 
}