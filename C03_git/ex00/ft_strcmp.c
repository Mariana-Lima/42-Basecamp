/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:42:01 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/12/02 22:13:52 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int c;

	c = 0;
	while (s1[c] != '\0' && (s1[c] == s2[c]))
	{
		c++;
	}
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
