//Crie um programa que leia um número inteiro e verifique se ele é positivo ou negativo. Se for positivo, calcule e imprima o seu quadrado. Se for negativo, calcule e imprima o seu valor absoluto.

#include <stdio.h>
#include <stdlib.h>

int main (){

    int num;
    printf("Digite um numero inteiro ! \n");
    scanf("%d",&num);

    if(num > 0){
        int quadrado = num * num;
        printf("O numero que voce digitou elevado ao quadrado se transforma no numero : %d \n",quadrado);
    }
    else if (num < 0){
        int absoluto = abs(num);
        printf("O numero que voce digitou eh menor que 0 ou seja negativo ! O absoluto dele fica : %d \n",absoluto);
    }
}