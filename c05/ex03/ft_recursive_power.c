/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:16:20 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/06 14:34:47 by vszpiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power < 0)
	{
		return (0);
	}
	if (power < 1)
	{
		return (1);
	}
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
