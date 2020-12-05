/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 21:31:02 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/11/26 12:19:06 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int nb;
	
	nb = 45;	
	write(1, &nb, 2);
	return (0);
}

void ft_putnbr_new(int nb)
{
	write(1, &nb, 1);
	write(1, "\n", 1);
}
