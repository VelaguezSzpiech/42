/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:30:18 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/04 15:37:13 by vszpiech         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				size;
	int				srcsize;
	unsigned int	i;

	srcsize = ft_strlen(src);
	size = ft_strlen(dest);
	i = 0;
	while (srcsize && i < nb)
	{
		dest[size + i] = src[i];
		i++;
		srcsize--;
	}
	dest[size + i] = '\0';
	return (dest);
}
