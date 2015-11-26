#include <stdio.h>

int main(){
	
	int par[5] = {2,4,6,8,10};
	int impar[5] = {1,3,5,7,9};
	int total[10];
	
	int i;
	for(i=0;i<10;i++)
	{
		if(i%2==0)
		{
			total[i] = par[i];
		}else{
			total[i] = impar[i];
			}
	}
	
	return 0;
	}
