/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 15:52:07 by mmanoel-          #+#    #+#             */
/*   Updated: 2020/12/01 00:22:39 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int resultado_div;
	int resto_div;

	resultado_div = *a / *b;
	resto_div = *a % *b;
	*a = resultado_div;
	*b = resto_div;
}
