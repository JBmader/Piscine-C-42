/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:31:52 by jmader            #+#    #+#             */
/*   Updated: 2024/10/10 18:44:16 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	check_base(char *base, int base_len);
int	ft_strlen(char *str);

int	nb_strlen(int nbr, char *base)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr != 0)
	{
		nbr = nbr / ft_strlen(base);
		i++;
	}
	return (i);
}

char	*ft_itoa_base(int nb, char *base)
{
	int		len;
	char	*res;
	long	nbr;

	nbr = nb;
	len = nb_strlen(nbr, base);
	res = malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	res[len] = '\0';
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		res[0] = base[0];
	while (nbr != 0)
	{
		res[len - 1] = base[nbr % ft_strlen(base)];
		nbr /= ft_strlen(base);
		len--;
	}
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		dec_base;
	char	*res;

	if (check_base(base_from, ft_strlen(base_from)) == 0
		|| check_base(base_to, ft_strlen(base_to)) == 0)
		return (NULL);
	dec_base = ft_atoi_base(nbr, base_from);
	res = ft_itoa_base(dec_base, base_to);
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("-1f : %s\n", ft_convert_base("-31", "0123456789", "0123456789abcdef"));
	printf("0 : %s\n", ft_convert_base("0", "0123456789", "0123456789abcdef"));
	printf("o : %s\n", ft_convert_base("01", "0123456789", "poneyvif"));
	printf("(null) : %s\n", ft_convert_base("", "0123456789", "poney vif"));
	printf("g : %s\n", ft_convert_base("i", "i~pv", "gYhQ_zUVuv"));
}*/
