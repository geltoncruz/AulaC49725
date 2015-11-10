#include <stdio.h>
int main()
{
	
	int patinho,cont;
	printf("INFORME A QUANTIDADE DE PATINHOS");
	scanf("%d",&patinho);
	
	cont = patinho;
	
	while(cont > 1)
	{
		printf("%d patinhos foram passear \n alem da montanha para brincar .... \n",cont);
		cont--;
	}
	printf("\n %d foi procurar ....",cont);
	return 0;
}
