/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:33:52 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/19 12:34:21 by vszpiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(char one, char two)
{
	ft_putchar(one);
	ft_putchar(two);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char	one;
	char	two;
	char	three;

	one = '0';
	two = '1';
	three = '2';
	while (one < ('9' + 1))
	{
		while (two < ('9' + 1))
		{
			ft_print(one, two);
			two++;
		}
		two = ++one ;
	}
}
