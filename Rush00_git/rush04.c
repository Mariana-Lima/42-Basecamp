/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmitsuko <pmitsuko@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 16:37:42 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/11/22 23:35:04 by pmitsuko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	theme_first_line(int x);
void	theme_words(int x, int y);
void	theme_last_line(int x);
void	ft_putchar(char s);

void	rush(int x, int y)
{
	if (x == 0 || y == 0)
	{
		write(1, "Enter a non-zero value.", 23);
	}
	else
	{
		theme_first_line(x);
		if (y > 2)
		{
			theme_words(x, y);
		}
		if (y > 1)
		{
			ft_putchar('\n');
			theme_last_line(x);
		}
	}
	ft_putchar('\n');
}

void	theme_first_line(int x)
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

void	theme_words(int x, int y)
{
	int cont_y;
	int cont_x;

	cont_y = 2;
	cont_x = 2;
	while (cont_y < y)
	{
		ft_putchar('\n');
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

void	theme_last_line(int x)
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
		ft_putchar('A');
	}
}
