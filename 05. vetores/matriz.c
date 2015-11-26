#include <stdio.h>

int main()
{
	//matriz
	int mat[3][3];
	int linha,coluna;
	
	for(linha=0;linha<3;linha++)
		{
			for(coluna=0;coluna<3;coluna++)
			{
				scanf("%d",&mat[linha][coluna]);
			}
		}
		for(linha=0;linha<3;linha++)
		{
			for(coluna=0;coluna<3;coluna++)
			{
				if(linha == coluna){
				printf("\t%d\t",mat[linha][coluna]);
				}
				
			}
			printf("\n");
		}
}
