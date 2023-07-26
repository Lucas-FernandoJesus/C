// Crie um programa que verifique se um número digitado pelo usuário é par ou ímpar e exiba essa informação na tela.

#include <stdio.h>

int main (){

    int num;

    printf("Digite um número e nós veremos se ele é par ou inteiro : \n");
    scanf(" %d",&num);

    if(num % 2 == 0){
        printf("Você digitou o número que é par ! : %d\n",num);
    }
    else{
        printf("Você digitou um numero que é impar ! \n");
    }
}