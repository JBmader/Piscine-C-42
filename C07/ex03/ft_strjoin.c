/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:07:51 by jmader            #+#    #+#             */
/*   Updated: 2024/10/09 18:51:28 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len_dest;

	i = 0;
	len_dest = 0;
	while (dest[len_dest])
		len_dest++;
	while (src[i])
	{
		dest[len_dest] = src[i];
		i++;
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (dest);
}

int	total_size(int size, char **strs, char *sep)
{
	int	i;
	int	size_strs;
	int	size_sep;
	int	size_total;

	i = 0;
	size_strs = 0;
	size_sep = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		size_strs += ft_strlen(strs[i]);
		i++;
	}
	size_total = size_strs + size_sep;
	return (size_total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		size_total;
	char	*result;

	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	i = 0;
	size_total = total_size(size, strs, sep);
	result = (char *)malloc(sizeof(char) * (size_total + 1));
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	while (i < size)
	{
		result = ft_strcat(result, strs[i]);
		if (i < size - 1)
			result = ft_strcat(result, sep);
		i++;
	}
	result[size_total] = '\0';
	return (result);
}
/*
#include <stdio.h>
	
int	main(void)
{
	char *strs[] = {"Hello", "je", "suis", "JB"};
	int	size = 4;
	char	*sep = "-";
	char	*res = ft_strjoin(size, strs, sep);

	printf("%s", res);
	return (0);
}*/
