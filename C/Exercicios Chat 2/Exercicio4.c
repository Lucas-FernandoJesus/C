// Faça um programa que leia o salário de um funcionário e calcule o aumento de salário. Para salários superiores a R$ 1500,00, o aumento deve ser de 10%. Para salários iguais ou inferiores a R$ 1500,00, o aumento deve ser de 15%. Imprima o novo salário.

#include <stdio.h>

int main (){

    int salario = 1500;
    int entrada;

    printf("Digite o valor do seu salario para ver quanto voce ira ganhar com 10 ou 15 porcento de aumento ! \n");
    scanf("%d",&entrada);

    if(entrada < 0){
        printf("Voce digitou um numero negativo ! \n");
        printf("Tente de novo ! \n");
    }
    else if(entrada <= salario){
        int aumento1 = salario * 1.15;
        printf("Voce recebeu 15 porcento de aumento ! \n");
        printf("O seu salario atualmente eh de R$ %d",aumento1);
    }
    else{
        int aumento2 = salario * 1.10;
        printf("Voce recebeu 10 porcento de aumento ! \n");
        printf("O seu salario atualmente eh de R$ %d ",aumento2);
    }
}