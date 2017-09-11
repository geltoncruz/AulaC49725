/*
 * switch-lancheria.c
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
	
	
	int codigo,qtd;
	float total;
	printf("..::\tLANCECHERIA\t::..");
	printf("\n Informe o código do lanche:\n");
	scanf("%d",&codigo);
	printf("Informe a quantidade");
	scanf("%d",&qtd);
	
	switch(codigo)
	{
		case 100:
			total = qtd * 1.20;
			printf("Você consumiu %d cachorro quente.\n Seu custo é de %.2f",qtd,total);
		break;
		case 101:
			total = qtd * 1.30;
			printf("Você consumiu %d bauro com ovo.\n Seu custo é de %.2f",qtd,total);
		break;
		default:
			printf("Código inválido");
	}
	
	return 0;
}

