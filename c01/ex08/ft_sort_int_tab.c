/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:32:15 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/01 18:41:17 by vszpiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	swapped;

	i = 0;
	swapped = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			swapped = 1;
		}
		i++;
	}
	if (swapped)
	{
		ft_sort_int_tab(tab, size);
	}
}

int main()
{
	int i =0;
	int size =5;
	int TAB[]= {1, 2, 3, 20, 5};
	int *tab=TAB;
	ft_sort_int_tab(tab,size);
	while (i<size)
	{
		printf("%d",tab[i]);
		i++;
	}
	return 0;
}
