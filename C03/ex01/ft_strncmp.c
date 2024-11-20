/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:04:15 by jmader            #+#    #+#             */
/*   Updated: 2024/09/25 19:34:07 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[] = "testoosddjfsoisjfseoijfseouhfseuhfseouhfseoifhseoifhseofh";
	char	str2[] = "test";

	printf("%d - ", ft_strncmp(str1, str2, 1));
	printf("%d", strncmp(str1, str2, 1));

}*/
