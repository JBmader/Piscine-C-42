/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:47:11 by jmader            #+#    #+#             */
/*   Updated: 2024/09/21 19:49:14 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab [j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	tab[5] = { 10, 3, 41, 7, 0};
	ft_sort_int_tab(tab, 5);
	int i;
	for (i = 0 ; i < 5 ; i++)
	{
		printf("%d\n", tab[i]);
	}
	return (0);
}*/
