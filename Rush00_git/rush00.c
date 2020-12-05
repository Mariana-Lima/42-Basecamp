/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmitsuko <pmitsuko@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 20:40:34 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/11/22 23:41:00 by pmitsuko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	theme_ball(int x);
void	theme_pipe(int x, int y);
void	ft_putchar(char s);

void	rush(int x, int y)
{
	if (x == 0 || y == 0)
	{
		write(1, "Enter a non-zero value.", 23);
	}
	else
	{
		theme_ball(x);
		if (y > 2)
		{
			theme_pipe(x, y);
		}
		if (y > 1)
		{
			write(1, "\n", 2);
			theme_ball(x);
		}
	}
	write(1, "\n", 2);
}

void	theme_ball(int x)
{
	int cont;

	cont = 1;
	ft_putchar('o');
	while (cont < x - 1)
	{
		ft_putchar('-');
		cont++;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
}

void	theme_pipe(int x, int y)
{
	int cont_y;
	int cont_x;

	cont_y = 2;
	cont_x = 2;
	while (cont_y < y)
	{
		write(1, "\n", 2);
		ft_putchar('|');
		while (cont_x < x)
		{
			ft_putchar(' ');
			cont_x++;
		}
		cont_x = 2;
		if (x > 1)
		{
			ft_putchar('|');
		}
		cont_y++;
	}
}
