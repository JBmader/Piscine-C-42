/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:57:08 by jmader            #+#    #+#             */
/*   Updated: 2024/09/23 18:36:25 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <unistd.h>

int	main(void)
{
	char	str[] = "tEst";
	int	i;

	i = 0;
	ft_strupcase(str);
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}*/
