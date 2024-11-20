/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:26:34 by jmader            #+#    #+#             */
/*   Updated: 2024/09/30 16:59:26 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	check_base(char *base, int base_len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base_len < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_rec_putnbr_base(long int nbr, char *base, int base_len)
{
	if (nbr >= base_len)
	{
		ft_rec_putnbr_base(nbr / base_len, base, base_len);
		ft_rec_putnbr_base(nbr % base_len, base, base_len);
	}
	else
		write(1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	num;
	int			base_len;

	num = nbr;
	base_len = ft_strlen(base);
	if (check_base(base, base_len))
	{
		if (num < 0)
		{
			write(1, "-", 1);
			num = -num;
		}
		ft_rec_putnbr_base(num, base, base_len);
	}
}
/*
int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	return (0);
}*/
