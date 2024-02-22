/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:50:43 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/01 18:26:21 by vszpiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a =13;
	int b=3;
	int DIV;
	int MOD;
	int *div=&DIV;
	int*mod=&MOD;
	ft_div_mod(a,b,div,mod);
	printf("%d %d",*div ,*mod);
	return 0;
}

