#include <stdio.h>
#include <string.h>

int main()
{
	char palavra[10];
	char rev[10];
	scanf("%s",palavra);
	int i,aux,j;
	j = sizeof(palavra);
	for(i=0;i<j;i++){
		//printf("%c",palavra[i]);
		strcpy(rev,palavra[i]);
		}
		for(i=0;i<j;i++){
		printf("%c",rev[i]);
		//strcpy(rev,palavra[i]);
		}
	return 0;
}
