#include <stdio.h> 

int main () {
    
    int idade, categoria; 
    
    printf ("Digite uma idade: ");
    scanf ("%d", &idade);
    
    if (idade < 18) 
        categoria = 1;
        
     else if (idade <= 65) 
        categoria = 2;

     else if (idade > 65) 
        categoria = 3;
       
    
    switch (categoria) {
        
        case 1:
        
        printf ("Menor de idade.\n");
        break;
        
        case 2: 
        
        printf ("Maior de idade.\n");
        break; 
        
        case 3: 
        
        printf ("Idoso.\n");
        break; 
        
        default:
        
        printf("Idade inválida\n");
        break;
    }
    
    return 0;
}
