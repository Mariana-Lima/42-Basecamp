/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:05:09 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/12/04 16:54:30 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_nome(char *name);

int	main(int argc, char **argv)
{
	int size;
	int c_argc;

	(void)argc;
	c_argc = 1;
	while (argc > 1)
	{
		if (argc > 1)
		{
			size = ft_nome(argv[argc - 1]);
		}
		write(1, argv[argc - 1], size);
		if (c_argc < argc)
			write(1, "\n", 1);
		argc--;
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
