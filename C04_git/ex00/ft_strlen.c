/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 02:53:42 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/12/03 13:34:36 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

#include <stdio.h>

int            main(void)
{
    char string[30] = "quarentaedois";
    unsigned int length;
    
    length = ft_strlen(string);
    printf("length: %i\n", length);
}