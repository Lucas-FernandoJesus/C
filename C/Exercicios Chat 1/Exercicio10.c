//Faça um programa que leia três notas de um aluno (de 0 a 10) e calcule a média aritmética dessas notas.

#include <stdio.h>

int main (){

    float nota1,nota2,nota3;

    printf("Digite suas 3 notas para fazermos uma média entre elas : \n");
    scanf("%f %f %f",&nota1,&nota2,&nota3);

    float soma = nota1 + nota2 +nota3;
    float divisao = soma / 3;
    printf("A media aritimetica de suas notas e de : \n");
    printf("%.2f",divisao);
}