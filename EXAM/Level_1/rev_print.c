/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 14:48:13 by jhu               #+#    #+#             */
/*   Updated: 2017/04/21 14:48:14 by jhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	rev_print(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return ;
}

int		main(int argc, char **argv)
{
	char n;

	n = '\n';
	if (argc != 2)
		return (write(1, &n, 1));
	else
	{
		rev_print(argv[1]);
		write(1, &n, 1);
	}
	return (0);
}