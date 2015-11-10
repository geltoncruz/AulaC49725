/*
 * switch.c
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
	//switch
	/*
	switch (variavel)
	{
		case  valor:
			//instrução
			break;
		case outrovalor:
			//instrucao
			break;
		default:
			//instrução;
			
	}
	*/
	
	int dia;
	printf("Informe um numero:\n");
	scanf("%d",&dia);
	
	switch(dia)
	{
		case 1:
			printf("Domingo\n");
		break;
		case 2:
			printf("Segunda\n");			
		break;
		case 3:
			printf("Terça\n");			
		break;
		case 4:
			printf("Quarta\n");			
		break;
		case 5:
			printf("Quinta\n");			
		break;
		case 6:
			printf("Sexta\n");			
		break;
		case 7:
			printf("Sábado\n");			
		break;
		default:
			printf("Opção inválida\n");			
	}
	
	return 0;
}






