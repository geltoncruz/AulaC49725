#include <stdio.h>

int main()
{
	int dia;
	printf("SELECIONE UM NUMERO E VEJA SUA REFERENCIA EM DIA");
	printf("\n1 - DOMINGO\n");
	printf("2 - SEGUNDA\n");
	printf("3 - TERÇA\n");
	printf("4 - QUARTA\n");
	printf("5 - QUINTA\n");
	printf("6 - SEXTA\n");
	printf("7 - SABADO\n");
	scanf("%d",&dia);
	
	switch(dia)
	{
		case 1:
		printf("DOMINGO");
		break;
		case 2:
		printf("SEGUNDA-FEIRA");
		break;
		case 3:
		printf("TERÇA-FEIRA");
		break;
		case 4:
		printf("QUARTA-FEIRA");
		break;
		case 5:
		printf("QUINTA-FEIRA");
		break;
		case 6:
		printf("SEXTA-FEIRA");
		break;
		case 7:
		printf("SABADO");
		break;
		default:
		printf("Dia invalido");
	}
	
	
}
