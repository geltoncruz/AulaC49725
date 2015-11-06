/*
 * main.c
 * 
 * Copyright 2015 geltoncruz <geltoncruz@geltoncruz-HP-14-Notebook-PC>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int idade;
	printf("Informe sua idade: \n");
	scanf("%d",&idade);
	
	if(idade >= 18) // validar condição
	{
		//executar expressões caso condição seja verdadeira.
		printf("Sua é idade é %d. \nVocê é maior de idade",idade);
	}
	else if(idade >= 16)
		{
			printf("sua idade é %d \n Você pode ter titulo de eleitor",idade);
		}
	else{
		printf("sua idade é %d\nVoce não tem idade suficiente para tais documentos",idade);
		}
	
	
	return 0;
}

