/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 04:04:49 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/11/29 23:33:23 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#define LINE 4
#define COLUMN 4

void	ft_values(*matriz[][]);
void	ft_matriz();
void	ft_verify_singularity(*matriz[][]);

int 	main()
{
	void ft_matriz();
}

void	ft_values(*matriz[][])
{
	//RECEBERÁ OS VALORES INSERIDOS PARA ORGANIZAR.
}

void	ft_matriz()
{
	int *matriz[LINE][COLUMN];
	int count;
	int counter;

	count = 0;
	counter = 0;

	matriz = malloc (LINE * sizeof (int*));// Alocação de um vetor de linha(LINE) com os ponteiros para as linhas
	
	while (count < LINE)
	{
		matriz[count] = malloc (COLUMN * sizeof (int*));//Alocação das linhas no vetor de coluna(COLUMN) de valores inteiros
	}
	
	while (count < LINE) // Percorre a matriz // Falta posicionar os valores
	{
		while (counter < COLUMN)
		{
			matriz[count][counter] = 0;
			counter++;
		}
		count++;
	}

	while (count < LINE)
	{
		free (matriz[count]);
		free (matriz);
		count++;
	}
}

void	ft_verify_singularity(*matriz[][])
{
	int count;
	int counter;

	count = 0;
	counter = 0;
	while (count < LINE) // Percorre a matriz a procura de valores repetidos na linha ou na coluna
	{
		while (counter < COLUMN)
		{
			if (ft_values(matriz[count][counter]) >= 1);
				write(1, "Error\n", 6);
			counter++;
		}
		count++;
	}
}


/*APOIO
iSSO: "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
	deve ser lido como: "4 3 2 1"(linha superior) 	"1 2 2 2"(linha inferior) 		"4 3 2 1"(coluna esquerda) 	1 2 2 2(coluna direita)
REPRESENTA:
	  4 3 2 1
	4		  1
	3		  2
	2		  2
	1		  2
	  1 2 2 2