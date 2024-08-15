#include <stdio.h> 

int main () {
    
    float celsius, fahrenheit; 
    
    printf ("Digite uma temperatura em celsius:"); 
    scanf ("%f", &celsius); 
    
    fahrenheit = (celsius * 1.8) + 32; 
    
    printf ("A temperatura convetida para fahrenheit é: %.2f\n", fahrenheit);
    
    return 0; 
    
}
