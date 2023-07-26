// Escreva um programa que calcule a área de um círculo. O raio do círculo deve ser fornecido pelo usuário. (Dica: a área de um círculo é dada por A = π * r^2, onde π é aproximadamente 3.14159).

#include <stdio.h>

#define PI 3.14519

int main (){

    double raio;
    
    printf("Digite o valor do raio do circulo : \n");
    scanf("%lf\n",&raio);

    double area = PI * raio * raio;

    printf("O valor da area do circulo é : %lf \n",area);

}