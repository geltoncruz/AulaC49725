#include <stdio.h>
/* Crie uma matriz 5x5, a preencha 
 * e imprima seus valores separados 
 * por linhas e colunas
 * 
*/
int main()
{
	int mat[3][3];
	int linha,coluna;
	for(linha=0;linha<3;linha++)
	{
		for(coluna=0;coluna<3;coluna++)
		{
			scanf("%i",&mat[linha][coluna]);
		}
	}
	return 0;	
}
