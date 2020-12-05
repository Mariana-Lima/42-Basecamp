/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmitsuko <pmitsuko@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 16:13:33 by pmitsuko          #+#    #+#             */
/*   Updated: 2020/11/22 23:37:24 by pmitsuko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	line_extreme(int x);
void	line_middle(int x, int y);
void	ft_putchar(char s);

void	rush(int x, int y)
{
	if (x == 0 || y == 0)
	{
		write(1, "Enter a non-zero value.", 23);
	}
	else
	{
		line_extreme(x);
		if (y > 2)
		{
			line_middle(x, y);
		}
		if (y > 1)
		{
			write(1, "\n", 2);
			line_extreme(x);
		}
	}
	write(1, "\n", 2);
}

void	line_extreme(int x)
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
		ft_putchar('C');
	}
}

void	line_middle(int x, int y)
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
