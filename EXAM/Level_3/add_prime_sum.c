/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 10:19:22 by jhu               #+#    #+#             */
/*   Updated: 2017/04/21 10:19:24 by jhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	write(1, str++, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	if (str[i] == '-')
		return (0);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		nbr = nbr * 10;
		nbr = nbr + (str[i] - 48);
		i++;
	}
	return (nbr);
}

void	ft_putnbr(int nbr)
{
	char c;

	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
}

int	ft_is_prime(int nbr)
{
	int i;

	i = 2;
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_add_prime_sum(int nbr)
{
	int i;
	int cnt;

	i = 2;
	cnt = 0;
	while (i <= nbr)
	{
		if (ft_is_prime(i))
			cnt = cnt + i;
		i++;
	}
	ft_putnbr(cnt);
}

int	main(int argc, char **argv)
{
	char zero;
	char rtn;

	zero = '0';
	rtn = '\n';
	if (argc == 2)
		ft_add_prime_sum(ft_atoi(argv[1]));
	else
		write(1, &zero, 1);
	write(1, &rtn, 1);
	return (0);
}