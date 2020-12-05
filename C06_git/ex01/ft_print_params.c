/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:36:05 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/12/04 16:53:23 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_nome(char *name);

int	main(int argc, char **argv)
{
	int size;
	int c_argc;

	(void)argc;
	c_argc = 1;
	while (c_argc < argc)
	{
		if (argc > 1)
		{
			size = ft_nome(argv[c_argc]);
		}
		write(1, argv[c_argc], size);
		if (c_argc < argc)
			write(1, "\n", 1);
		c_argc++;
	}
}

int	ft_nome(char *name)
{
	int c;

	c = 0;
	while (name[c] != '\0')
	{
		c++;
	}
	return (c);
}
