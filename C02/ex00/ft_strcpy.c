/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 10:46:17 by jmader            #+#    #+#             */
/*   Updated: 2024/09/23 10:56:05 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <unistd.h>

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
	char	src[] = "Source du programme";
	char	dest[] = "Ceci est la destination";

	ft_putstr(dest);
	ft_putstr(src);
	char	*new_src = ft_strcpy(dest, src);
	ft_putstr(new_src);
	return (0);
}*/
