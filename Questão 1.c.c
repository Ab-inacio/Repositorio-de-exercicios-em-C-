#include <stdio.h>

int main () { 
    
    float lado, area, dobroArea;
    
    printf ("Digite o valor do lado do quadrado em cm: ");
    scanf ("%f", &lado);
    
    area = lado * lado; 
    
    printf ("O valor da area é: %.2f\n", area);
    
    dobroArea = area * 2;
    
    printf ("O dobro da area é: %.2f\n", dobroArea); 
    
    return 0;
    
}