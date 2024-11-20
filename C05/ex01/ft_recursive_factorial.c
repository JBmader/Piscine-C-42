/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:17:59 by jmader            #+#    #+#             */
/*   Updated: 2024/10/01 16:20:41 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	result *= ft_recursive_factorial(nb - 1);
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
	return (0);
}*/
