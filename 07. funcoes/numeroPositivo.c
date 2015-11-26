/*
 * numeroPositivo.c
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

int verifica(int n);

int main()
{
	//Crie uma função que receba um valor e informe se ele é positivo ou não.
	int numero;
	printf("INFORME UM NUMERO");
	scanf("%d",&numero);
	
	verifica(numero);
	return 0;
}

int verifica(int n)
{
	if(n < 0 )
	{
			printf("%i é negativo",n);
	}
	else
	{
		printf("%i é positivo",n);
	}
}
