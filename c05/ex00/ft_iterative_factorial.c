/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:09:14 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/06 11:27:21 by vszpiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = 1;
	f = 1;
	if (nb == 1)
	{
		return (0);
	}
	while (i <= nb)
	{
		f = f * i;
		i++;
	}
	return (f);
}
