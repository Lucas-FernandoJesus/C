//Escreva um programa que leia a idade de uma pessoa em anos e informe a idade em dias, considerando que um ano possui 365 dias.

#include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade : \n");
    scanf("%d",&idade);
    printf("Sua idade eh : %d \n",idade);

    int tempo = idade * 365;

    printf("Sua idade em dias fica : \n");
    printf("%d",tempo);

}