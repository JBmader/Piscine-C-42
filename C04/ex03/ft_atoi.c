/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:15:30 by jmader            #+#    #+#             */
/*   Updated: 2024/09/26 13:26:50 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nbr;
	int	sign;
	int	i;

	nbr = 0;
	sign = 1;
	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || (str[i] > 8 && str[i] < 14)))
		i++;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr = nbr * 10 + (str[i] - '0');
		if (str[i + 1] < '0' || str[i + 1] > '9')
			return (sign * nbr);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "  ---+--+1234ab567";
	printf("%d", ft_atoi(str));
	return (0);
}*/
