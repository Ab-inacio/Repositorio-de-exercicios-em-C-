#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_PALAVRA 11  

int main() {
    char palavra[MAX_PALAVRA];
    char letrasDescobertas[MAX_PALAVRA];
    char tentativa;
    int tamanho, vidas, i;
    int letraEncontrada, letrasDescobertasTotal;
    
    printf("Digite a palavra secreta (máximo de 10 letras): ");
    fgets(palavra, MAX_PALAVRA, stdin);
    
    palavra[strcspn(palavra, "\n")] = '\0';
    
    tamanho = strlen(palavra);
    
    for (i = 0; i < tamanho; i++) {
        letrasDescobertas[i] = 0;  
    }
    letrasDescobertas[tamanho] = '\0';  
    
    vidas = tamanho + 2;
    
    printf("\nBem vindo ao Jogo da Forca!\n");
    printf("Você tem %d vidas.\n\n", vidas);
    
    while (vidas > 0) {
        for (i = 0; i < tamanho; i++) {
            if (letrasDescobertas[i] == 0) {
                printf("_ ");
            } else {
                printf("%c ", palavra[i]);
            }
        }
        printf("\n");
        
        printf("Digite uma letra: ");
        scanf(" %c", &tentativa);
        tentativa = tolower(tentativa);  
        
        letraEncontrada = 0;
        for (i = 0; i < tamanho; i++) {
            if (palavra[i] == tentativa) {
                letrasDescobertas[i] = 1;
                letraEncontrada = 1;
            }
        }
        
        if (letraEncontrada) {
            printf("A letra '%c' está na palavra.\n", tentativa);
        } else {
            vidas--;
            printf("A letra '%c' não está na palavra. Você perdeu uma vida.\n", tentativa);
        }
        
        letrasDescobertasTotal = 1;
        for (i = 0; i < tamanho; i++) {
            if (letrasDescobertas[i] == 0) {
                letrasDescobertasTotal = 0;
                break;
            }
        }
        
        if (letrasDescobertasTotal) {
            printf("\nMuito bem! Você descobriu a palavra: %s\n", palavra);
            break;
        }
        
        if (vidas <= 0) {
            printf("\nVocê perdeu! A palavra era: %s\n", palavra);
        }
        
        printf("Você tem %d vidas restantes.\n\n", vidas);
    }
    
    return 0;
}
