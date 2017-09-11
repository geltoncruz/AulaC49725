#include <stdio.h>

float media(float a, float b){
	float m = (a+b)/2;
	return m;
	}
int main()
{
	float aluno1 = media(7,5);
	float aluno2 = media(7,2);
	
	if(aluno1 != aluno2){
		printf("%.2f",aluno1);
		}
	
}
