/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:20:00 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/19 14:47:06 by vszpiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert_hexa(unsigned char c)
{
	char	*hexabase;

	hexabase = "0123456789abcdef";
	if (c > 16)
	{
		ft_putchar(hexabase[c / 16]);
		ft_putchar(hexabase[c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hexabase[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	ch;

	i = 0;
	while (str[i])
	{
		ch = (unsigned char)str[i];
		if ((ch <= 31 && ch >= 0) || ch == 127)
		{
			ft_putchar('\\');
			ft_convert_hexa(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

#include <stdio.h>

#include <stdio.h>

int main(void)
{
    // Test with a string containing non-printable characters
    char str1[] = "Hello\aworld\n";
    printf("Test 1: ");
    ft_putstr_non_printable(str1);  // Expected output: Hello\a07world\a0a
    printf("\n");

    // Test with an empty string
    char str2[] = "";
    printf("Test 2: ");
    ft_putstr_non_printable(str2);  // Expected output: (nothing)
    printf("\n");

    // Test with a string containing only printable characters
    char str3[] = "Hello, world!";
    printf("Test 3: ");
    ft_putstr_non_printable(str3);  // Expected output: Hello, world!
    printf("\n");

    return 0;
}

