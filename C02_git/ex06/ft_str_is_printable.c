/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:55:01 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/12/02 13:36:19 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int numero;

	numero = 0;
	if (*str > 0)
	{
		while (*str != '\0')
		{
			if (*str >= 32 && *str <= 126)
				numero = 1;
			else
				return (0);
			str++;
		}
	}
	else
	{
		return (1);
	}
	return (numero);
}


#include <stdio.h>
int main(void)
{
	char *ptr;
	int nr;
	
	ptr = "'";
	nr = ft_str_is_printable(ptr);
	printf("%d", nr);
	
	return (0);
}