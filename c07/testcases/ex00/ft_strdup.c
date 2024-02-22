/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:22:20 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/12 11:15:01 by vszpiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char    *ft_strdup(char *src)
{
    char    *new;
    int     i;
    int     size;

    size = 0;
    while (src[size])
        size++;
    if (!(new = malloc(sizeof(char) * (size + 1))))
        return (NULL);
    i = 0;
    while (src[i])
    {
        new[i] = src[i];
        i++;
    }
    new[i] = '\0';
    return (new);
}
int main() {
    // Test cases with various scenarios:
    char *test_strings[] = {
        "Hello, world!",
        "",
        "This is a longer string.",
        "Contains special characters: @#$%^&*",
        NULL, // Test with a null pointer
    };

    for (int i = 0; test_strings[i]; i++) {
        // Test `ft_strdup`
        char *dup = ft_strdup(test_strings[i]);

        // Verify correctness:
        if (!dup) {
            printf("Test %d failed: malloc failed\n", i + 1);
        } else {
            // Compare lengths and contents
            int len_original = strlen(test_strings[i]);
            int len_dup = strlen(dup);
            if (len_dup != len_original || strcmp(test_strings[i], dup) != 0) {
                printf("Test %d failed: incorrect duplication\n", i + 1);
            } else {
                printf("Test %d passed: successful duplication\n", i + 1);
            }

            // Free the allocated memory
            free(dup);
        }
    }

    printf("\nAll tests completed.\n");
    return 0;
}