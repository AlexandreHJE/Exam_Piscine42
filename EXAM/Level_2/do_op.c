/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 00:09:18 by jhu               #+#    #+#             */
/*   Updated: 2017/04/21 00:09:19 by jhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	do_op(char *nb1, char *op, char *nb2)
{
  int	n1;
  int	n2;
  int	r;

  n1 = atoi(nb1);
  n2 = atoi(nb2);
  r = 0;
  if (op[0] == '+')
    r = n1 + n2;
  else if (op[0] == '-')
    r = n1 - n2;
  else if (op[0] == '*')
    r = n1 * n2;
  else if (op[0] == '/')
    r = n1 / n2;
  else if (op[0] == '%')
    r = n1 % n2;
  printf("%d\n", r);
}

int	main(int argc, char **argv)
{
  if (argc == 4)
    do_op(argv[1], argv[2], argv[3]);
  else
    printf("\n");
  return (0);
}