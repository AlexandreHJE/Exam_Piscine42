/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lv2_print_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 23:52:20 by jhu               #+#    #+#             */
/*   Updated: 2017/04/20 23:53:23 by jhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
	char bits[8];
	int nb;
	int count;
	char z;

	nb = octet;
	count = 0;
	while (count < 8)
	{
		bits[count] = nb % 2;
		nb = nb / 2;
		count++;
	}
	while (count - 1 >= 0)
	{
		z = bits[count - 1] + 48;
		write(1, &z, 1);
		count--;
	}
}
