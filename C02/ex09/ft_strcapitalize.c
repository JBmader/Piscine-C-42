/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:48:25 by jmader            #+#    #+#             */
/*   Updated: 2024/09/23 20:33:37 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	ft_strlowercase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && new_word == 1)
		{	
				str[i] -= 32;
				new_word = 0;
		}
		else if ((str[i] >= '0' && str[i] <= '9') && new_word == 1)
				new_word = 0;
		else if (!(str[i] >= '0' && str[i] <= '9'))
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
				new_word = 1;
		}
		i++;
	}
	return (str);
}
/*
#include <unistd.h>

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	int	i;

	ft_strcapitalize(str);
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;	
	}
	return (0);
}*/
