/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:58:24 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/04 16:37:43 by vszpiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destsize;
	unsigned int	srcsize;
	unsigned int	i;

	srcsize = ft_strlen(src);
	destsize = ft_strlen(dest);
	i = 0;
	if (destsize < size - 1 && size > 0)
	{
		while (src[i] && destsize + i < size - 1)
		{
			dest[destsize + i] = src[i];
			i++;
		}
		dest[destsize + i] = '\0';
	}
	if (destsize >= size)
		return (srcsize + size);
	return (destsize + srcsize);
}
