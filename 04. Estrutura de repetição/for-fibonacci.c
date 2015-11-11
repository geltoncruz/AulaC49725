#include <stdio.h>

void main(){
	
	int i,x,y,aux;
	
	x = 0;
	y = 1;
	printf("%d ",y);
	for(i = 0; i < 10 ; i++){
		aux = x+y;
		x = y;
		y = aux;
		printf("%d ",aux);
		}
	}
