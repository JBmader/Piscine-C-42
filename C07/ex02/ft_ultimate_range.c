/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:42:50 by jmader            #+#    #+#             */
/*   Updated: 2024/10/10 18:47:38 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	val;

	i = 0;
	val = min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (val < max)
	{
		range[0][i] = val;
		val++;
		i++;
	}
	return (max - min);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*range;
	int	size;

	size = ft_ultimate_range(&range, -5, -1);
	printf("Size : %d\nRange : ", size);
	while (size != 0)
	{
		printf("%d ", *range);
		size--;
		range++;
	}
	return (0);
}*/
