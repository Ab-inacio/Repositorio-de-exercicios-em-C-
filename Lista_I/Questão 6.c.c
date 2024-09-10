#include <stdio.h> 

int main () {
    
    float litros_consumidos, tempo, distancia, velocidade_media; 
    const float consumo = 12; 
    
    printf ("Digite o tempo gasto na viagem em horas: ");
    scanf ("%f", &tempo);
    
    printf ("Digite a velocidade media em km/h: ");
    scanf ("%f", &velocidade_media); 
    
    distancia = tempo * velocidade_media;
    
    printf ("A distancia percorrida foi de: %.2f\n" ,distancia); 
    
    litros_consumidos = distancia / consumo;
    
    printf ("A quantidade de litros usados foi de: %.2f\n" ,litros_consumidos);
    
    return 0;
}
