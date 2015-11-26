#include <stdio.h>

int main(){
	int n;
	printf("Informe um numero:\n");
	scanf("%i",&n);
	int count = 1;
	while(count <= n)
	{
		if(count%2==1)
		{	
			printf("%i\t",count);
		}else{
			printf("%i\n",count);
			}
			count++;
	}
		
	return 0;
	}
