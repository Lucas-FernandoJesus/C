//Crie um programa que calcule o salário líquido de um funcionário, descontando 11% do salário bruto para o INSS.

#include <stdio.h>

int main (){

    int salario;
    printf("Digite o valor do seu salario bruto : \n");
    scanf("%d",&salario);

    int liquido = (salario - (salario * 0.11));
    printf("O valor do seu salario liquido é de : %d",liquido);
}