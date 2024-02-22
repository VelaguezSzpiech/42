/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:44:13 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/14 14:06:28 by vszpiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define TRUE 1
# define FALSE 0

static inline int	ft_even(int nbr)
{
	return (nbr % 2 == 0);
}
# define EVEN_MSG "even\n"
# define ODD_MSG "odd\n"
# define SUCCESS 0

typedef int	t_bool;

#endif