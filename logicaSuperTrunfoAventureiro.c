#include <stdio.h>
	

	int main() {
		
		char cidade1[20], cidade2[20];  //variavel para o usuário informar o nome da cidade
		
		unsigned long int pop1, pop2; 	//variavel para o usuário informar o total populacional da cidade.
		float area1, area2;				//variavel para o usuário informar o total da area em km
		float pib1, pib2; 				//variavel para o usuário determinar o pib
		int pt1, pt2; 					//variavel para o usuário determinar a quantidade de pontos turisticos
		float densidadep1, densidadep2; //variavel para calcular a densidade populacional
		
		
		float resultadoDensidade; 		//variavel para calcular o MENOR valor da densidade entre as duas cartas (o menor valor vence)
		
		int opcao; 						//variavel para realizar a implementação do switch
	
		
		printf("			Bem Vindo ao Super Trunfo!\n");
	
					//a partir daqui segundo usuário entrará com todos referente a carta 1	
		printf("Informe o nome da cidade da carta 1: \n");
		scanf("%s", &cidade1);
		printf("Informe o número de habitantas da carta 1: \n");
		scanf("%lu", &pop1);
		printf("Informe a área em quilômetros quadrados(km²) da carta 1: \n");
		scanf("%f", &area1);
		printf("Informe o PIB da cidade da carta 1: \n");
		scanf("%f", &pib1);
		printf("Infome a quantidade de pontos turisticos que contém na cidade da carta 1: \n");
		scanf("%d", &pt1);
	
	
				//a partir daqui segundo usuário entrará com todos referente a carta 2	
		printf("\n\nInforme o nome da cidade da carta 2: \n");
		scanf("%s", &cidade2);
		printf("Informe o número de habitantas da carta 2: \n");
		scanf("%lu", &pop2);
		printf("Informe a área em quilômetros quadrados(km²) da carta 2: \n");
		scanf("%f", &area2);
		printf("Informe o PIB da cidade da carta 2: \n");
		scanf("%f", &pib2);	
		printf("Infome a quantidade de pontos turísticos que contém na cidade da carta 2: \n");
		scanf("%d", &pt2);
		
		//	calculando densidade populacional da carta 1
		densidadep1 = pop1 / area1;
		
		//calculando densidade populacional da carta 2
		densidadep2 = pop2 / area2;
		

		
				//executando o comando switch para duelos entre as cartas
		printf("\n			Hora do Duelo!!\n");;
		printf("Selecione qual atributo deseja duelar a partir do menu abaixo: \n");
		
		printf("1. População\n");
		printf("2. Área\n");
		printf("3. PIB\n");
		printf("4. Número de pontos turísticos\n");
		printf("5. Densidade Populacional\n");
		scanf("%d", &opcao);
		
		
		switch (opcao){
			case 1:
				if (pop1 > pop2){
					printf("%c X %c\n", cidade1, cidade2);
					printf("População da carta 1 = %d X População da carta 2 = %d\n", pop1, pop2);
					printf("Resultado: Carta 1 venceu o duelo\n");
				}else if (pop2 > pop1){
					printf("%c X %c", cidade1, cidade2);
					printf("População da carta 1 = %d X População da carta 2 = %d\n", pop1, pop2);
					printf("Resultado: Carta 2 venceu o duelo\n");
				}else{
					printf("%c X %c\n", cidade1, cidade2);
					printf("População da carta 1 = %d X População da carta 2 = %d\n", pop1, pop2);
					printf("Resultado: Empate\n");
				}
			
			break;
			case 2:
				if (area1 > area2){
					printf("Área da carta 1 = %.2f km² X Área da carta 2 = %.2f km²\n", area1, area2);
					printf("Resultado: Carta 1 Venceu o duelo\n");
				}else if (pop2 > pop1){
					printf("Área da carta 1 = %.2f km² X Área da carta 2 = %.2f km²\n", area1, area2);
					printf("Resultado: Carta 2 Venceu o duelo\n");
				}else{
					printf("Área da carta 1 = %.2f km² X Área da carta 2 = %.2f km²\n", area1, area2);
					printf("Resultado: Empate\n");
				}
			break;
			case 3:
				if (pib1 > pib2){
					printf("PIB da carta 1 = R$%.2f X PIB da carta 2 = R$%.2f\n", pib1, pib2);
					printf("Resultado: Carta 1 Venceu o duelo\n");
				}else if (pib2 > pib1){
					printf("PIB da carta 1 = R$%.2f X PIB da carta 2 = R$%.2f\n", pib1, pib2);
					printf("Resultado: Carta 2 Venceu o duelo\n");
				}else{
					printf("PIB da carta 1 = R$%.2f X PIB da carta 2 = R$%.2f\n", pib1, pib2);
					printf("Resultado: Empate\n");
				}
			break;
			case 4:
				if (pt1 > pt2){
					printf("Total de pontos turísticos da carta 1 = %d X Quantidade de pontos turísticos da carta 2 = %d\n", pt1, pt2);
					printf("Resultado: Carta 1 Venceu o duelo\n");
				}else if (pt2 > pt1){
					printf("Total de pontos turísticos da carta 1 = %d X Quantidade de pontos turísticos da carta 2 = %d\n", pt1, pt2);
					printf("Resultado: Carta 2 Venceu o duelo\n");
				}else{
					printf("Total de pontos turísticos da carta 1 = %d X Quantidade de pontos turísticos da carta 2 = %d\n", pt1, pt2);
					printf("Resultado: Empate\n");
				}
			break;
			case 5:
				if (densidadep1 < densidadep2){
					printf("Densidade Populacional da carta 1 = %.2f hb/km X Densidade Populacional da carta 2 = %.2f hb/km\n", densidadep1, densidadep2);
					printf("Resultado: Carta 1 Venceu o duelo\n");
				}else if (densidadep2 < densidadep1){
					printf("Densidade Populacional da carta 1 = %.2f hb/km X Densidade Populacional da carta 2 = %.2f hb/km²\n", densidadep1, densidadep2);
					printf("Resultado: Carta 2 Venceu o duelo\n");
				}else{
					printf("Densidade Populacional da carta 1 = %.2f hb/km X Densidade Populacional da carta 2 = %.2f hb/km²\n", densidadep1, densidadep2);
					printf("Resultado: Empate\n");
				}
			break;
			default:
				printf("Opcao de duelo inválida, tente novamente!\n");
		}
}
