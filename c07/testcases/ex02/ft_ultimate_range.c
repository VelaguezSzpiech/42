/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:19:42 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/13 14:16:47 by vszpiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	if (min > max)
	{
		*range = NULL;
		return (0);
	}
	array = malloc(sizeof(int) * (max - min));
	if (array == NULL)
	{
		return (-1);
	}
	i = 0;
    while (i < max - min)
    {
        array[i] = min + i;
        ++i;
    }
	*range = array;
	return (i);
}

void print_array(int *arr, int length) {
    if (arr != NULL) {
        printf("[");
        for (int i = 0; i < length - 1; i++) {
            printf("%d, ", arr[i]);
        }
        printf("%d]\n", arr[length - 1]);
    } else {
        printf("(empty array)\n");
    }
}

int main() {
    printf("** Test Cases for ft_ultimate_range **\n");

    // Test case 1: min < max
    int *arr1;
    int length1 = ft_ultimate_range(&arr1, 5, 10);
    print_array(arr1, length1);   // Print expected: 5 6 7 8 9
    free(arr1);
    return 0;
}
