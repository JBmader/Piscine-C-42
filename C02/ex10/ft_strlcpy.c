/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 22:19:00 by jmader            #+#    #+#             */
/*   Updated: 2024/09/23 22:45:39 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	if (len == 0)
		return (0);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (len);
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
	char	*new_src = ft_strlcpy(dest, src, 7);
	ft_putstr(new_src);
	return (0);
}*/
