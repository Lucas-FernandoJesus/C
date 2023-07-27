//5. Crie um programa que leia um número inteiro e calcule a soma dos dígitos desse número. Por exemplo, se o usuário digitar 123, o programa deve retornar 6 (1 + 2 + 3).

#include <stdio.h>
#include <string.h>

int main (){

    int num,digito,soma = 0;

    printf("Digite um numero inteiro : \n");
    scanf("%d",&num);

    char numeroString[20];
    sprintf(numeroString, "%d",num);

    int totalCaracteres = strlen(numeroString);

    for(int i = 0; i < totalCaracteres; i ++){
        digito = numeroString[i] - '0';
        soma += digito;
    }

    printf("A soma dos numeros do numero inteirdo que voce digitou e de %d \n ",soma);
}