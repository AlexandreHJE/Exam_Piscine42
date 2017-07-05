/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 14:32:49 by jhu               #+#    #+#             */
/*   Updated: 2017/04/21 14:32:50 by jhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int        ft_check(char *a, char b, int n)
{
    int        i;

    i = 0;
    while (i < n)
    {
        if (a[i] == b)
            return (0);
        i++;
    }
    return (1);
}

void    ft_print(char *a, char *b)
{
    int        i;
    int        j;

    i = 0;
    j = 0;
    while (a[i])
    {
        if (ft_check(a, a[i], i))
            ft_putchar(a[i]);
        i++;
    }
    while (b[j])
    {
        if (ft_check(a, b[j], i) && ft_check(b, b[j], j))
            ft_putchar(b[j]);
        j++;
    }
}

int        main(int argc, char **argv)
{
    if (argc == 3)
    {
        ft_print(argv[1], argv[2]);
    }
    ft_putchar('\n');
    return (0);
}

// #include <unistd.h>

// void	ft_union(char *str, char *str2)
// {
// 	int	tab[256] = {0};
// 	int	a;
	
// 	a = 0;
// 	while (str[a])
// 	{
// 		if (tab[(int)str[a]] == 0)
// 		{
// 			tab[(int)str[a]] = 1;
// 			write (1, &str[a], 1);
// 		}
// 		a++;
// 	}
// 	a = 0;
// 	while (str2[a])
// 	{
// 		if (tab[(int)str2[a]] == 0)
// 		{
// 			tab[(int)str2[a]] = 1;
// 			write(1, &str2[a], 1);
// 		}
// 		a++;
// 	}
// }

// int	main (int ac, char **av)
// {
// 	if (ac == 3)
// 		ft_union(av[1], av[2]);
// 	write(1, "\n", 1);
// 	return (0);
// }