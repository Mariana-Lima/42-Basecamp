/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 02:46:39 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/12/03 14:05:04 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, sizeof(*str));
		str++;
	}
}

#include <stdio.h>
void        ft_putstr(char *str);

int            main(void)
{
    char string[50] = "quarenta e dois";

    ft_putstr(string);
}