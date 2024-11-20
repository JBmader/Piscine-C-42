/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:35:47 by jmader            #+#    #+#             */
/*   Updated: 2024/10/01 15:24:57 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = nb;
	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i > 1)
	{
		i--;
		result *= i;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	int	a = 1;
	printf("%d\n", ft_iterative_factorial(a));
}*/
