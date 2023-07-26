#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	// imprime o cabecalho do nosso jogo
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
	printf("******************************************\n");

	// variaveis :
	int segundos = time(0);
	srand(segundos);

	int numeroGrande = rand();
	int acertou = 0;
	int numeroSecreto = numeroGrande % 100;
	int chute;
	int tentativas = 1;
	double pontos = 1000;
	int nivel;

	printf("Qual o nivel de dificuldade que você quer jogar ?\n");
	printf("(1) Fácil (2) Médio (3) Dificil \n\n");
	printf("Escolha :");
	scanf("%d",&nivel);
	
	int numeroTentativas;
	switch (nivel){
		case 1:
			numeroTentativas = 20;
			break;
		case 2:
			numeroTentativas = 15;
			break;
		default:
			numeroTentativas = 6;
			break;
	}
	
	// Laços / Loops
	for (int i = 1; i <= numeroTentativas; i++){

		printf("Tentativa %d \n", tentativas);
		printf("Qual e o seu chute ? \n");
		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);

		if(chute < 0){
			printf("Você não pode chuta números negativos ! \n");
			continue;
		}

		acertou = (chute == numeroSecreto);
		int maior = (chute > numeroSecreto);

		if (acertou){
			break;
		}
		else if (maior){
			printf("Seu chute foi maior que o numero secreto !\n");
		}
		else {
			printf("Seu chute foi menor que o numero secreto !\n");
		}
		tentativas ++;

		double pontosPerdidos = abs(chute - numeroSecreto) / (double)2;
		pontos = pontos - pontosPerdidos;
	}
	printf("Fim de jogo !\n");
	if(acertou){
		printf("Você ganhou !\n");
		printf("Você acertou em %d tentativas ! \n",tentativas);
		printf("Total de Pontos %.1f \n", pontos);
	}
	else {
		printf("Você perdeu, tente novamente");
	}	

}