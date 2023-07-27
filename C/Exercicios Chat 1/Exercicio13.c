//Escreva um programa que peça ao usuário para digitar uma frase e conte o número de vogais (a, e, i, o, u) presentes nessa frase.

#include <stdio.h>

int main (){

    char palavra;
    int contadorVogal = 0;
    
    printf("Difite uma frase para que seja contablizada as vogais que nela existem : \n");
    scanf("%c",&palavra);

    while ((palavra = getchar() ) != '\n'){
        if (palavra == 'a' || palavra == 'A' ||
            palavra == 'e' || palavra == 'E' ||
            palavra == 'i' || palavra == 'I' ||
            palavra == 'o' || palavra == 'O' ||
            palavra == 'u' || palavra == 'U' ){
            contadorVogal++;
            }
    }
    
    printf("A frase possui %d vogais \n",contadorVogal);

}