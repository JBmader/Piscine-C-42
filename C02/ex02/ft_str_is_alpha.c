/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:22:49 by jmader            #+#    #+#             */
/*   Updated: 2024/09/23 16:03:15 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <unistd.h>

int	main(void)
{
	char	*str;
	char	c;

	str = "a1";
	c = ft_str_is_alpha(str) + '0';
	write(1, &c, 1);
}*/
