// Faça um programa que peça ao usuário para digitar um número inteiro e, em seguida, imprima esse número na tela.

#include <stdio.h>

int main (){

    int num;

    printf("Ola digite um número inteiro para que você possa ver o mesmo sendo imprimido na tela : \n");
    scanf("%d",&num);
    printf("Esse é o número que você digitou : %d \n",num);
}