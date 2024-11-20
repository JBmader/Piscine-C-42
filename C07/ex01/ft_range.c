/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:39:14 by jmader            #+#    #+#             */
/*   Updated: 2024/10/09 18:56:14 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*tab = ft_range(-7, -3);
	int	i = 0;
	while (i < 4)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
