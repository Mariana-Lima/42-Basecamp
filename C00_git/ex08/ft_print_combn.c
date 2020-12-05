/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:23:30 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/11/26 21:34:08 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	verificar(int cont, int digito);
int		recursiva(int cont, int digito);

int		ft_print_combn(void){
	int cont = 0;
	int digito = 4; 
	int total;

	int x = ft_recursiva(cont, digito);
	printf("%d", x);
}

int		ft_recursiva(int cont, int digito) {
	if(cont > digito){
		return 1;
	}else{
		verificar(cont, digito);
		return (digito+recursiva(digito-1));
  }
}

void	ft_verificar(int cont, int digito){
	int dezena;
	long int total;
	
	int unidade = 0;	
	int contador = 0;

	while (cont < digito){
		while(contador < unidade){    
			total + 1;
			if(dezena <= unidade)
				continue;
			else
				printf("%ld", total);
			unidade = 0;
			contador++;
		}
		cont++;
	}
}
