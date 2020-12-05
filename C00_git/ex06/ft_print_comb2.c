/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 01:39:58 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/11/26 20:35:49 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int a, int b, int c, int d);
void	ft_counter(int a, int b, int c, int d);

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	ft_counter(a, b, c, d);
}

void	ft_counter(int a, int b, int c, int d)
{
	while (a <= '9')
	{
		while (b < '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_print(a, b, c, d);
					d++;
					if (a == '9' && b == '8')
						write(1, "", 0);
					else
						write(1, ", ", 2);
				}
				d = '1';
				c++;
			}
			b++;
			d = b + 1;
			c = a;
		}
		b = '0';
		a++;
	}
}

void	ft_print(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
}
