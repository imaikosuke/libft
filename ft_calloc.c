/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:37:07 by koimai            #+#    #+#             */
/*   Updated: 2023/09/29 16:44:54 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t	total_size;
	void	*dest;

	total_size = num_elements * element_size;
	dest = malloc(total_size);
	if (!dest)
		return (NULL);
	ft_memset(dest, 0, total_size);
	return (dest);
}

// #include <stdio.h>
// int main() {
//     size_t num_elements = 5;
//     size_t element_size = sizeof(int);

//     // int型の要素が5つ分のメモリを確保し、ゼロで初期化
//     int *arr = (int *)ft_calloc(num_elements, element_size);

//     if (arr != NULL) {
//         for (size_t i = 0; i < num_elements; i++) {
//             printf("arr[%zu] = %d\n", i, arr[i]);
//         }
//         free(arr); // メモリの解放
//     } else {
//         printf("メモリの割り当てに失敗しました。\n");
//     }

//     return 0;
// }
