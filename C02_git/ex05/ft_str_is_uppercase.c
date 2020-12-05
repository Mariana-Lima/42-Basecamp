/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:55:01 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/12/01 21:49:42 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int numero;

	numero = 0;
	if (*str > 0)
	{
		while (*str != '\0')
		{
			if (*str >= 'A' && *str <= 'Z')
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
