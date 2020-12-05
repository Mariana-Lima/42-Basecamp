/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:59:37 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/12/04 23:59:50 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_name(char *name);

int	main(int argc, char **argv)
{
	int size;

	(void)argc;
	size = ft_name(argv[0]);
	write(1, argv[0], size);
	write(1, "\n", 1);
	return (0);
}

int	ft_name(char *name)
{
	int c;

	c = 0;
	while (name[c] != '\0')
	{
		c++;
	}
	return (c);
}
