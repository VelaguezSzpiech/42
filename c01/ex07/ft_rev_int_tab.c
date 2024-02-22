/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:16:13 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/01 18:40:21 by vszpiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size--;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
		
	}
}

int main()
{
	int i = 0;
	int size =5;
	int TAB[]= {1, 2, 3, 4, 5};
	int *tab=TAB;
	ft_rev_int_tab(tab,size);
	while (i<size)
	{
		printf("%d",tab[i]);
		i++;
	}
	
	return 0;
}

