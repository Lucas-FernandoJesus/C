//Escreva um programa que leia um caractere do usuário e verifique se é uma vogal (a, e, i, o, u) ou uma consoante. Se for uma vogal, imprima "Vogal". Caso contrário, imprima "Consoante".

#include <stdio.h>

int main (){

    char a;

    printf("Digite uma letra para que seja informado se ela eh vogal ou consoante : \n");
    scanf("%c",&a);

    if (a == 'a' || a == 'A' ||
        a == 'e' || a == 'E' ||
        a == 'i' || a == 'I' ||
        a == 'o' || a == 'O' ||
        a == 'u' || a == 'U'){
            printf("Vogal \n");
        }
    else{
        printf("Consoante \n");
    }
}