/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:00:55 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/13 16:34:45 by vszpiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*array;
	int	i;

	if (start >= end)
		return (0);
	i = end - start;
	array = malloc(sizeof(int) * i);
	if (array == NULL)
	{
		return (NULL);
	}
	while (end > start)
	{
		array[i] = start;
		start++;
		i++;
	}
	array[i] = end;
	return (array);
}
