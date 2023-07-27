// Faça um programa que leia a idade de uma pessoa e informe em que faixa etária ela se encontra: "criança" (0 a 12 anos), "adolescente" (13 a 17 anos), "adulto" (18 a 59 anos) ou "idoso" (60 anos ou mais).

#include <stdio.h>

int main (){

    int idade;

    printf("Digite a sua idade : \n");
    scanf("%d",&idade);

    if (idade > 0 && idade <= 12){
        printf("Voce pertence a faixa etaria de criancas ! \n");
    }
    if (idade > 12 && idade <= 17){
        printf("Voce pertence a faixa etaria de adolescentes ! \n");
    }
    if (idade > 17 && idade <= 59){
        printf("Voce pertence a faixa etaria de adultos ! \n");
    }
    if (idade >= 60){
        printf("Voce pertence a faixa etaria de idosos ! \n");
    }
}