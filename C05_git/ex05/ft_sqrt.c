/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:58:00 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/12/04 20:30:33 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int count;
	int result;

	count = 1;
	result = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (result <= nb count <= 46341)
	{
		count++;
		result = count * count;
	}
	if (nb == (count - 1) * (count - 1))
		return (count - 1);
	return (0);
}
