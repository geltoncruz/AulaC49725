#include <stdio.h>

int main()
{
	char tabuleiro[3][3];
	int i,j,l,c;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Informe a linha\n");
			scanf("%i",&l);
			printf("Informe a Coluna\n");
			scanf("%i",&c);
			
		}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%i",tabuleiro[i][j]);
		}
	
	}
}
