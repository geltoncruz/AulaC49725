#include <stdio.h>

void main(){
	
	int i;
	int vetor[5] = {1,2,3,4,5};
	
	for(i=0;i<5;i++){
		scanf("%d",&vetor[i]);
		}
	
	printf("\n%d",&vetor[3]); //memoria
	printf("\n%d",vetor[3]); //valor
	
	/*
	for(i=0;i<5;i++){
		printf("%d",vetor[i]);
		}
	
	
	*/
}
