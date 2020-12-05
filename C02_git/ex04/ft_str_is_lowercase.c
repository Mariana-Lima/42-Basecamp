/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:55:01 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/12/01 21:49:33 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int numero;

	numero = 0;
	if (*str > 0)
	{
		while (*str != '\0')
		{
			if (*str >= 'a' && *str <= 'z')
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
