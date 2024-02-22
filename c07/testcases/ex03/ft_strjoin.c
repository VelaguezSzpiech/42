/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:02:25 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/12 12:13:37 by vszpiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strjoin(int size, char **strs, char *sep) {
    int total_length = 0;
    int i = 0;
    int j = 0;
    int c = 0;
    char *s;

    while (i < size) {
        if (strs[i] != NULL) {
            while (strs[i][j] != '\0') {
                total_length++;
                j++;
            }
        }
        if (i != size - 1 && sep != NULL) {
            while (sep[j] != '\0') {
                total_length++;
                j++;
            }
        }
        i++;
        j = 0;
    }

   
    if (!(s = (char *)malloc(total_length + 1))) { 
        return NULL;
    }

    i = 0;
    j = 0;
    c = 0;
    while (i < size) {
        if (strs[i] != NULL) {
            j = 0;
            while (strs[i][j] != '\0') {
                s[c++] = strs[i][j];
                j++;
            }
        }
        if (i != size - 1 && sep != NULL) {
            j = 0;
            while (sep[j] != '\0') {
                s[c++] = sep[j];
                j++;
            }
        }
        i++;
    }

    s[c] = '\0'; // Null-terminate
    return s;
}

int main() {
   // Test cases with various string lengths, separators, and array sizes
   char *strings1[] = {"Hello", "world", "!"};
   char *strings2[] = {""};
   char *strings3[] = {"a", "b", "c", "d"};
   char *strings4[] = {NULL, "foo", "bar"};
   char *separator1 = "-";
   char *separator2 = ", ";
   char *separator3 = "";

   char *result;

   // Test case 1: Multiple strings, basic separator
   result = ft_strjoin(3, strings1, separator1);
   printf("Test 1: Expected: Hello-world-!\nActual: %s\n", result);
   free(result);

   // Test case 2: Single empty string
   result = ft_strjoin(1, strings2, separator2);
   printf("Test 2: Expected: \nActual: %s\n", result);
   free(result);

   // Test case 3: Multiple strings, empty separator
   result = ft_strjoin(4, strings3, separator3);
   printf("Test 3: Expected: abcd\nActual: %s\n", result);
   free(result);

   // Test case 4: Null string in the array
   result = ft_strjoin(3, strings4, separator1);
   printf("Test 4: Expected: -foo-bar\nActual: %s\n", result);
   free(result);

   // Test case 5: Empty array of strings
   result = ft_strjoin(0, NULL, separator2);
   printf("Test 5: Expected: \nActual: %s\n", result);
   free(result);

   // Test case 6: Null separator
   result = ft_strjoin(2, strings1, NULL);
   printf("Test 6: Expected: Helloworld\nActual: %s\n", result);
   free(result);
// Test case 7: Array of strings with all NULL values
char *strings5[] = {NULL, NULL, NULL};
result = ft_strjoin(3, strings5, separator1);
printf("Test 7: Expected: --\nActual: %s\n", result);
free(result);

// Test case 8: Array of strings with all empty strings
char *strings6[] = {"", "", ""};
result = ft_strjoin(3, strings6, separator1);
printf("Test 8: Expected: --\nActual: %s\n", result);
free(result);

// Test case 9: Array of strings with mixed NULL and non-NULL values
char *strings7[] = {"Hello", NULL, "World"};
result = ft_strjoin(3, strings7, separator1);
printf("Test 9: Expected: Hello-World\nActual: %s\n", result);
free(result);

// Test case 10: Array of strings with mixed empty and non-empty strings
char *strings8[] = {"Hello", "", "World"};
result = ft_strjoin(3, strings8, separator1);
printf("Test 10: Expected: Hello--World\nActual: %s\n", result);
free(result);
   return 0;
}