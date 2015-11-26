#include <stdio.h>
int soma(int x, int y);
float media(int x, int y);
int main()
{
	int a,b;
	printf("INSIRA DOIS VALORES:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	//soma(a,b);
	media(a,b);
	float v = media(a,b);
	printf("%.2f",v);
	
	
	return 0;
}
int soma(int x, int y)
{
	int adicao;
	adicao = x+y;
	printf("%d\n",adicao);
	return adicao;
}
float media(int x, int y)
{
	float res = (x+y)
	/2;
	float ret;
	printf("%.2f\n",res);
	ret = 55;
	return ret;
}
