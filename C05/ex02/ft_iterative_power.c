/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:24:18 by jmader            #+#    #+#             */
/*   Updated: 2024/10/01 18:07:04 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	if (power < 0)
		return (0);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}*/
