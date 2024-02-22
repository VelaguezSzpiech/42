/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:53:17 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/01 18:30:47 by vszpiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a / *b;
	tempb = *a % *b;
	*b = tempb;
	*a = tempa;
}

int main()
{
	int A=10;
	int B=5;
	int *a=&A;
	int*b=&B;
	ft_ultimate_div_mod(a,b);
	printf("%d %d",*b ,*a);
	return 0;
}

