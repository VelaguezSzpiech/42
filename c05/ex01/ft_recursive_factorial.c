/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:03:26 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/06 11:29:58 by vszpiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb == 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	result = ft_recursive_factorial(nb - 1) * nb;
	return (result);
}
