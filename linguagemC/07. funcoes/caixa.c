#include <stdio.h>
#include <string.h>

float balanca(float p, float v);

int main(){
	float notaFiscal[10];
	float peso,total,valor;
	
	

	int i;
	
	for(i=0;i<10;i++){
		
		scanf("%f",&peso);
		scanf("%f",&valor);		
		
		notaFiscal[i] = balanca(peso,valor);
		
		}
		printf("\nDETALHE DA NOTA\n");
		
		for(i=0;i<10;i++){
		total = total+notaFiscal[i];
		printf("%i - %.2f\n",i,notaFiscal[i]);
		
		}
		printf("Total da compra é: R$ %2.f",total);
		
		return 0;
		
	}

float balanca(float p, float v){
	float preco = p*v;
	printf("%.2f\n",preco);
	return preco;
	
	}

