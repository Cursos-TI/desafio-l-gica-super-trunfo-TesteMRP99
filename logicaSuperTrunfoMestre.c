#include <stdio.h>

	int main(){
		
		char cidade1[20], cidade2[20];  															//variavel para o usuário informar o nome da cidade
		int pop1, pop2; 																	//variavel para o usuário informar o total populacional da cidade.
		float area1, area2;																	//variavel para o usuário informar o total da area em km
		float pib1, pib2; 																	//variavel para armazenar o pib
		int ataque1, ataque2, ataque3, defesa1, defesa2, defesa3, recuo1, recuo2, recuo3; 	//variavel para armazenar os valores dos duelos
		char primeiroAtributo, segundoAtributo;												//variavel para armazenar o tipo de ataque que o usuario ira realizar
		int resultado1, resultado2;															//variavel para armazenar o resultado da comparação entre um atributo e outro
		
		printf("Bem-Vindo ao Super trunfo!\n");
		printf("Informe o nome da cidade da carta 1: \n");
		scanf("%s", &cidade1);
		printf("Informe o número de habitantas da carta 1: \n");
		scanf("%d", &pop1);
		printf("Informe a área em quilômetros quadrados km² da carta 1: \n");
		scanf("%f", &area1);
		printf("Informe o PIB da cidade da carta 1: \n");
		scanf("%f", &pib1);
		
		printf("\n\nInforme o nome da cidade da carta 2: \n");
		scanf("%s", &cidade2);
		printf("Informe o número de habitantas da carta 2: \n");
		scanf("%d", &pop2);
		printf("Informe a área em quilômetros quadrados km² da carta 2: \n");
		scanf("%f", &area2);
		printf("Informe o PIB da cidade da carta 2: \n");
		scanf("%f", &pib2);	
		
		
		
		printf("\nHora do Duelo!\n");
		printf("Escolha qual será sua primeira jogada: \n");
		printf("A. Ataque\n");
		printf("D. Defesa\n");
		printf("R. Recuo\n");
		scanf(" %c", &primeiroAtributo);
		
		
		switch(primeiroAtributo){
			case 'A':
			case 'a':	
				printf("Opção do Duelo: Ataque!\n");
				resultado1 = pop1 > pop2 ?  1: 0;
				printf("Valor do primeiro atributo do jogador 1: %d\n", pop1);
				printf("Valor do primeiro atributo do jogador 2: %d\n", pop2);
				break;
			case 'D':
			case 'd':
				printf("Opção do Duelo: Defesa!\n");
				resultado1 = area1 > area2 ?  1: 0;
				printf("Valor do primeiro atributo do jogador 1: %.0fkm²\n", area1);
				printf("Valor do primeiro atributo do jogador 2: %.0fkm²\n", area2);
				break;
			case 'R':
			case 'r':
				printf("Opção do Duelo: Recuar!\n");
				resultado1 = pib1 > pib2 ?  1: 0;
				printf("Valor do atributo do jogador 1: %.0f\n", pib1);
				printf("Valor do atributo do jogador 2: %.0f\n", pib2);
				break;
			default: 
				printf("Opção de duelo inválida, fim de jogo!\n");
				return 0;
		}
		printf("Escolha qual será o segundo Duelo: \n");
		printf("A. Ataque\n");
		printf("D. Defesa\n");
		printf("R. Recuo\n");
		scanf(" %c", &segundoAtributo);
		
		
		if (primeiroAtributo == segundoAtributo){
			printf("Os jogadores escolheram a mesma opção de duelo, portanto o jogo será encerrado\n");
			return 0;
		}else{
			switch (segundoAtributo){
			case 'A':
			case 'a':
				printf("Opção do Duelo: Ataque!\n");
				resultado2 = pop1 > pop2 ?  1: 0;
				printf("Valor do atributo do jogador 1: %d\n", pop1);
				printf("Valor do atributo do jogador 2: %d\n", pop2);
				break;
			case 'D':
			case 'd':
				printf("Opção do Duelo: Defesa!\n");
				resultado2 = area1 > area2 ?  1: 0;
				printf("Valor do atributo do jogador 1: %.0f\n", area1);
				printf("Valor do atributo do jogador 2: %.0f\n", area2);
				break;
			case 'R':
			case 'r':
				printf("Opção do Duelo: Recuar!\n");
				resultado2 = pib1 > pib2 ?  1: 0;
				printf("Valor do atributo do jogador 1: %.0f\n", pib1);
				printf("Valor do atributo do jogador 2: %.0f\n", pib2);
				break;
			default: 
				printf("Opção de jogo inválida, fim de jogo!\n");
				return 0;
		 }
		}
		printf("\n\nResultado da Partida!\n");
		if (resultado1 && resultado2){
			printf("Parabéns jogador 1, você venceu!\n");
		}else if (resultado1 != resultado2){
			printf("Empate\n");
		}else{
			printf("Parabéns jogador 2, você venceu!\n");
		}
	}