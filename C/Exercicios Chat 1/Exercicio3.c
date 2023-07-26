// Crie um programa que receba dois números inteiros digitados pelo usuário e imprima a soma desses números.

#include <stdio.h>

int main(){

    int a;
    int b;

    printf("Digite dois números inteiros \n");
    scanf("%d", &a);
    scanf("%d", &b);

    int soma = a + b;

    printf("O resultado da soma dos dois numeros e : %d\n",soma);

}