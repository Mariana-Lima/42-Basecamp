/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:53:41 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/12/02 22:24:52 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	int				dest_aux;

	c = 0;
	dest_aux = 0;
	while (dest[dest_aux] != '\0')
	{
		dest_aux++;
	}
	while (c < nb && src[c] != '\0')
	{
		dest[dest_aux] = src[c];
		dest_aux++;
		c++;
	}
	dest[dest_aux] = '\0';
	return (dest);
}
