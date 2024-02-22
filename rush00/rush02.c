/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:17:54 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/04 12:26:58 by vszpiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_line(int x, char front, char midle, char end)
{
	int	j;

	j = 0;
	while (j < x)
	{
		if (j == 0)
			ft_putchar(front);
		else
		{
			if (!(j == x - 1))
				ft_putchar(midle);
			else
				ft_putchar(end);
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (!(x <= 0 || y <= 0))
	{
		while (i < y)
		{
			if (i == 0)
				draw_line(x, 'A', 'B', 'A');
			else if (!(i == y - 1))
				draw_line(x, 'B', ' ', 'B');
			else
				draw_line(x, 'C', 'B', 'C');
			i++;
		}
	}
}
