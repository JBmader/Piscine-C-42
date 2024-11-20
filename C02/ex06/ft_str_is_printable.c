/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:28:20 by jmader            #+#    #+#             */
/*   Updated: 2024/09/23 17:32:02 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] < ' ' || str[i] > '~')
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

	str = "321";
	c = ft_str_is_printable(str) + '0';
	write(1, &c, 1);
}*/
