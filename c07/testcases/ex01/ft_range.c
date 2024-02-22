/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vszpiech <vszpiech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:00:55 by vszpiech          #+#    #+#             */
/*   Updated: 2024/02/13 14:30:30 by vszpiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	length;
	int	*array;
	int	i;
	if (min >= max)
		return (NULL);
	length = max - min;
	array = malloc(sizeof(int) * (length));
	if (!(array))
		return (NULL);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
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
    printf("** Test Cases for ft_range **\n");

    // Test case 1: min < max
    int *arr1 = ft_range(-1, 10);
    print_array(arr1, 5);   // Print expected: 5 6 7 8 9
    free(arr1);

    // Test case 2: min == max
    int *arr2 = ft_range(5, 5);
    print_array(arr2, 5);   // Print expected: 5
    free(arr2);

    // Test case 3: max less than min (empty array)
    int *arr3 = ft_range(10, 5);
    print_array(arr3, 0);   // Print expected: (empty array)
    free(arr3);

    // Test case 4: large numbers (check for integer overflow)
    int *arr4 = ft_range(-2147483648, 2147483647);
    print_array(arr4, 2);   // Print expected: -2147483648 -2147483647 (or maximum negative and positive integers)
    free(arr4);

    // Test case 5: NULL pointer return on allocation failure
    int *arr5 = ft_range(5,1);  // Exceeds maximum allocation size
    if (arr5 == NULL) {
        printf("Expected NULL pointer for allocation failure (min too large).\n");
    } else {
        // Should not reach here if allocation succeeds
        print_array(arr5, 1);   // Unexpected behavior
        free(arr5);
    }

    return 0;
}