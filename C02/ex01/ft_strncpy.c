/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:49:25 by jmader            #+#    #+#             */
/*   Updated: 2024/09/23 13:18:43 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;		
	}
}
 
int	main(void)
{
	char	src[] = "Source";
	char	dest[] = "Ceci est la destination";

	//ft_putstr(dest);
	//ft_putstr(src);
	char	*new_src = ft_strncpy(dest, src, 7);
	ft_putstr(new_src);
	return (0);
}*/
