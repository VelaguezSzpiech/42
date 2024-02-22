/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:00:50 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/04 15:29:09 by vszpiech         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	size;
	int	srcsize ;
	int	i;

	srcsize = ft_strlen(src);
	size = ft_strlen(dest);
	i = 0;
	while (srcsize)
	{
		dest[size + i] = src[i];
		i++;
		srcsize--;
	}
	dest[size + i] = '\0';
	return (dest);
}
