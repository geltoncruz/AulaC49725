#include <stdio.h>
#include <string.h>

int main(){
	
	char texto[100] = "Gelton";
	char nome[] = "Cruz";
	
	//texto = "Santos";
	strcpy(texto,"Santos");
	res = strrev(texto);
	printf("%s",strcat(texto,nome));
	
	//printf("%s da %s\n",texto,nome);
	//printf("%c\n",nome[0]);	
	
	return 0;
	}


