//Implemente um programa que leia um valor inteiro e verifique se ele é positivo, negativo ou igual a zero.

#include <stdio.h>

int main (){

    int num ;

    printf("Digite um número positivo maior ou igual a zero : \n");
    scanf("%d",&num);

    if(num > 0){
        printf("O numero que voce digitou eh positivo ! \n");
    }
    else if(num < 0){
        printf("Voce digitou um numero negativo menor que 0, tente digitar novamente ! \n");
    }
    else {
        printf("O numero que voce digitou eh igual a zero ! \n");
    }
}