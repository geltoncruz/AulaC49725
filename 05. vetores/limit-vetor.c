#include <stdio.h>

int main(){
	
	int vet[5];
	int i,pos;
	
	for(i=0;i<5;i++){
		scanf("%d",&vet[i]);
	}
	printf("INFORME A QUANTIDADE DE VETORES A EXIBIR");
	scanf("%d",&pos);
	//printf("%d \n",pos);
	
	for(i=pos-1;i>=0;i--){
		printf("%d \n",vet[i]);
		}
	
	return 0;
	
}
