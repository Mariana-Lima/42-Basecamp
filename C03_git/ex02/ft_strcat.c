/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:18:01 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/12/02 22:14:32 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int c;
	int dest_aux;

	c = 0;
	dest_aux = 0;
	while (dest[dest_aux] != '\0')
	{
		dest_aux++;
	}
	while (src[c] != '\0')
	{
		dest[dest_aux] = src[c];
		dest_aux++;
		c++;
	}
	dest[dest_aux] = '\0';
	return (dest);
}
