/*
 * operadorLogico.c
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
	//Operadores Lógicos
	float media;
	int faltas;
	printf("..::: CONTROLE DE NOTAS E FALTAS :::..\n\n");
	printf("INFORME A MÉDIA: \n");
	scanf("%1f",&media);
	printf("INFORME A QUANTIDADE DE FALTAS:\n");
	scanf("%d",&faltas);
	//system("cls");

		//OPERADOR AND obriga que as duas condições sejam verdadeiras
	
	 if(media >= 7 && faltas < 40)
	{
		printf("Aprovado!\n");
	}
	 
	 //OPERADOR OR deseja no mínimo uma condição verdadeiras
	 if(media >= 7 || faltas < 40)
	{
			printf("Aprovado");
	}
	
	//Não executará se a condição for falsa.
	if(!media >=7)
	{
		printf("Reprovado");
	}
	return 0;
}

