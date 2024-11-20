/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:47:11 by jmader            #+#    #+#             */
/*   Updated: 2024/09/21 18:41:58 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab [size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int	tab[5] = { 1, 2, 3, 4, 5};
	ft_rev_int_tab(tab, 5);
	int i;
	for (i = 0 ; i < 5 ; i++)
	{
		printf("%d\n", tab[i]);
	}
	return (0);
}*/
