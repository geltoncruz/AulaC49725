#include <stdio.h>
int main()
{	
	int total,count;
	float nota,soma;
	printf("Informe a quantidade de alunos:\n");
	scanf("%i",&total);
	count = 1;
	while(count <= total){
		printf("Informe a nota:\n");
		scanf("%f",&nota);
		soma = soma+nota;
		count++;
		}
	printf("\nA media da turma é %.2f",soma/total);
	return 0;
}
