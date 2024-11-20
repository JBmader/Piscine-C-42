/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:18:45 by jmader            #+#    #+#             */
/*   Updated: 2024/10/09 18:59:31 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*set_word(char *str, int str_start, int i)
{
	char	*word;
	int		j;

	j = 0;
	word = malloc(sizeof(char) * (i - str_start + 1));
	if (!word)
		return (NULL);
	while (str_start < i)
	{
		word[j] = str[str_start];
		j++;
		str_start++;
	}
	word[j] = '\0';
	return (word);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && check_sep(str[i], charset) == 1)
			i++;
		if (str[i] && check_sep(str[i], charset) == 0)
		{
			count++;
			i++;
		}	
		while (str[i] && check_sep(str[i], charset) == 0)
			i++;
	}
	return (count);
}

char	**fill_res(char *str, char *charset, char **res)
{
	int	i;
	int	global_i;
	int	str_start;

	i = 0;
	global_i = 0;
	while (str[i])
	{
		while (str[i] && check_sep(str[i], charset) == 1)
			i++;
		str_start = i;
		while (str[i] && check_sep(str[i], charset) == 0)
			i++;
		if (str_start < i)
		{
			res[global_i] = set_word(str, str_start, i);
			global_i++;
		}
	}
	res[count_words(str, charset)] = NULL;
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;

	res = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!res)
		return (NULL);
	res = fill_res(str, charset, res);
	return (res);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	char	**strs;
	(void) argc;
	i = 0;
	strs = ft_split(argv[1], argv[2]);
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (0);
}*/
