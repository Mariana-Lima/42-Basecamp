/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmitsuko <pmitsuko@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 20:40:34 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/11/23 00:06:20 by pmitsuko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	theme_lettera(int x);
void	theme_letterb(int x, int y);
void	theme_letterc(int x);
void	ft_putchar(char s);

void	rush(int x, int y)
{
	if (x == 0 || y == 0)
	{
		write(1, "Enter a non-zero value.", 23);
	}
	else
	{
		theme_lettera(x);
		if (y > 2)
		{
			theme_letterb(x, y);
		}
		if (y > 1)
		{
			write(1, "\n", 2);
			theme_letterc(x);
		}
	}
	write(1, "\n", 2);
}

void	theme_lettera(int x)
{
	int cont;

	cont = 1;
	ft_putchar('A');
	while (cont < x - 1)
	{
		ft_putchar('B');
		cont++;
	}
	if (x > 1)
	{
		ft_putchar('A');
	}
}

void	theme_letterb(int x, int y)
{
	int cont_y;
	int cont_x;

	cont_y = 2;
	cont_x = 2;
	while (cont_y < y)
	{
		write(1, "\n", 2);
		ft_putchar('B');
		while (cont_x < x)
		{
			ft_putchar(' ');
			cont_x++;
		}
		cont_x = 2;
		if (x > 1)
		{
			ft_putchar('B');
		}
		cont_y++;
	}
}

void	theme_letterc(int x)
{
	int cont;

	cont = 1;
	ft_putchar('C');
	while (cont < x - 1)
	{
		ft_putchar('B');
		cont++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
}
