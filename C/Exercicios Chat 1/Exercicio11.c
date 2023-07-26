//Crie um programa que determine o maior e o menor entre três números informados pelo usuário.

#include <stdio.h>

int main (){

    int num1,num2,num3;
    int maior, menor;

    printf("Digite o primeiro numero : \n");
    scanf("%d",&num1);

    printf("Digite o segundo numero : \n");
    scanf("%d",&num2);

    printf("Digite o terceiro numero : \n");
    scanf("%d",&num3);

    maior = menor = num1;

    if(num2 > maior){
        maior = num2;
    }
    else if(num2 < menor){
        menor = num2;
    }

    if(num3 > maior){
        maior = num3;
    }
    else if(num3 < menor){
        menor = num3;
    }

    printf("O menor numero eh : %d \n",menor);
    printf("O maior numero eh : %d \n",maior);
    
}