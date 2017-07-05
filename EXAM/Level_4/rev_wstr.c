/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 13:19:50 by jhu               #+#    #+#             */
/*   Updated: 2017/04/21 13:19:52 by jhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		put_char(char c)
{
	write(1, &c, 1);
}

void		put_word(char *str)
{
	while (*str && *str != ' ' && *str != '\t')
		write(1, str++, 1);
}

int			main(int ac, char **av)
{
	int		i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
			i++;
		i--;
		while (av[1][i] && i > 0)
		{
			while (av[1][i] != ' ' && av[1][i] != '\t' && i > 0)
				i--;
			put_word(av[1] + i + (i == 0 ? 0 : 1));
			if (i > 0)
				put_char(' ');
			while ((av[1][i] == ' ' || av[1][i] == '\t') && i > 0)
				i--;
		}
	}
	put_char('\n');
	return (0);
}

/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int        ft_strlen(char *str)
{
    int        i;

    i = 0;
    while (*str)
    {
        i++;
        str++;
    }
    return (i);
}

void    ft_rev_wstr(char *str)
{
    //find the length, skip to the end, jump backwards until you hit start or hit ' '
    //write word, write space if not start of line
    //set current position as word and jump backwords;

    int        i;
    int        end;
    char    *copy;
    int        j;

    j = 0;
    end = ft_strlen(str) - 1;
    copy = (char*)malloc(sizeof(char) * (end + 2));
    while (end > 0)
    {
        while (end + 1 > 0 && str[end] != ' ')
        end--;
        i = end + 1;
        while (str[i] && str[i] != ' ')
        {
            copy[j] = str[i];
            j++;
            i++;
        }
        end--;
        if (end > 0)
        {
            copy[j] = ' ';
            j++;
        }
        else
        copy[j] = '\0';

    }
    ft_putstr(copy);
    ft_putchar('\n');
}


int        main(int argc, char **argv)
{
    if (argc == 2)
        ft_rev_wstr(argv[1]);
    else
        ft_putchar('\n');
    return (0);
}
*/