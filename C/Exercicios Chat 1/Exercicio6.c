//Implemente um programa que leia um valor inteiro em metros e o converta para centímetros e milímetros, imprimindo os resultados.

#include <stdio.h>

int main (){

    int metros;
    printf("Digite a quantidade de metros que você deseja : \n");
    scanf("%d",&metros);
    printf("Você quer %d m \n",metros);

    int centimetros = metros * 100;
    printf("Essa quantidade de metros convertida para centimetros fica : %d cm\n",centimetros);

    int milimetros = metros * 1000;
    printf("Essa quantidade de metros convertida para milimetros fica : %d mm\n",milimetros);
}