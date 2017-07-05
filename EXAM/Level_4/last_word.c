/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 13:41:24 by jhu               #+#    #+#             */
/*   Updated: 2017/04/21 13:41:26 by jhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print(char *str)
{
    int        i;
    int        j;

    i = 0;
    j = 0;
    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\t')
        {
            if (str[i + 1] != ' ' && str[i + 1] != '\t' && str[i + 1] != '\0')
                j = i + 1;
        }
        i++;
    }
    if (j == 0)
        return ;
    while (str[j] != ' ' && str[j] != '\t' && str[j] != '\0')
    {
        ft_putchar(str[j]);
        j++;
    }
}

int        main(int argc, char **argv)
{	
    if (argc == 2)
    {
        ft_print(argv[1]);
    }
    ft_putchar('\n');
    return (0);
}