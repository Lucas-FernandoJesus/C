//Implemente um programa que leia a temperatura em graus Celsius e a converta para graus Fahrenheit, utilizando a fórmula: F = (C * 9/5) + 32.

#include <stdio.h>

int main (){

    float celsius;

    printf("Digite a temperatura desejada : \n");
    scanf("%f",&celsius);

    printf("Iremos mostrar agora a mesma temperatura mas convertida em Fahrenheit \n");
    float fahrenheit = (celsius * 9 / 5)+ 32;

    printf("A temperatura em Fahrenheit é de : \n");
    printf("%.2f",fahrenheit);

}