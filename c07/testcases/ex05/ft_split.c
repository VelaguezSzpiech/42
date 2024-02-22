/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:26:39 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/13 14:24:44 by vszpiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include<stdio.h>

int	count_words(const char *str, char space)
{
	int	word_count;
	int	in_word;

	word_count = 0;
	in_word = 0;
	while (*str != '\0')
	{
		if (in_word == 0 && *str != space)
		{
			in_word = 1;
			word_count++;
		}
		if (in_word == 1 && *str == space)
		{
			in_word = 0;
		}
		str++;
	}
	return (word_count);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

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

char	**ft_split(char const *s, char separator)
{
	int		i;
	int		j;
	int		index;
	char	**split;

	split = malloc((count_words(s, separator) + 1) * sizeof(char *));
	if (!s || !(split))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen((char *)s))
	{
		if (s[i] != separator && index < 0)
			index = i;
		else if ((s[i] == separator || i == ft_strlen((char *)s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}


int main() {
    char *test_cases[] = {
        "Hello, world!",
        "This is a string with multiple words.",
        "Empty  string",
        "", // Empty string
        "Single   word",
        "One  word,  extra    spaces",
        "Leading  spaces",
        "Trailing  spaces",
        "Multiple  consecutive  separators",
        "Special   characters: @#$%^&*",
        "No  separator",
        NULL // Sentinel value
    };

    int i;

    for (i = 0; test_cases[i] != NULL; i++) {
        char **result = ft_split(test_cases[i], ' ');

        printf("Test case: \"%s\"\n", test_cases[i]);

        if (result == NULL) {
            printf("Error: ft_split returned NULL.\n");
        } else {
            int j = 0;
            while (result[j] != NULL) {
                printf("Word %d: \"%s\"\n", j + 1, result[j]);
                j++;
            }
            printf("Word count: %d (expected: %d)\n", j, count_words(test_cases[i], ' '));
            free(result); // Free allocated memory
        }

        printf("\n");
    }

    return 0;
}