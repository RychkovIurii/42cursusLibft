/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:05:30 by irychkov          #+#    #+#             */
/*   Updated: 2024/04/18 00:22:30 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (dst_len + i < dstsize - 1 && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/* 
int main() {
    char dest[20] = "Hello ";
	char dest_m[20] = "Hello ";
    const char *src = "world!";
    size_t result;
	size_t result2;

    // Test case 1: Testing with destination size greater than concatenated string length
    result = ft_strlcat(dest, src, sizeof(dest));
	result2 = strlcat(dest_m, src, sizeof(dest_m));
    printf("Result 1: %zu\n", result);
    printf("Destination 1: %s\n", dest);
	printf("Result 1: %zu\n", result2);
    printf("Destination 1: %s\n", dest_m);

    // Test case 2: Testing with destination size smaller than concatenated string length
    char dest2[5] = "Hi ";
	char dest2_m[5] = "Hi ";
    result = ft_strlcat(dest2, src, sizeof(dest2));
	result2 = strlcat(dest2_m, src, sizeof(dest2_m));
	printf("Result 2: %zu\n", result);
	printf("Destination 2: %s\n", dest2);
	printf("Result 2: %zu\n", result2);
	printf("Destination 2: %s\n", dest2_m);

    // Test case 3: Testing with destination size equal to 0
    char dest3[10] = "Hello";
	char dest3_m[10] = "Hello";
    result = ft_strlcat(dest3, src, 0);
	result2 = strlcat(dest3_m, src, 0);
    printf("Result 3: %zu\n", result);
    printf("Destination 3: %s\n", dest3);
	printf("Result 3: %zu\n", result2);
    printf("Destination 3: %s\n", dest3_m);

	// Test case 4: Testing with destination size less than length of destination string
	char dest4[5] = "Hi ";
	char dest4_m[5] = "Hi ";
	result = ft_strlcat(dest4, src, 3);
	result2 = strlcat(dest4_m, src, 3);
	printf("Result 4: %zu\n", result);
	printf("Destination 4: %s\n", dest4);
	printf("Result 4: %zu\n", result2);
	printf("Destination 4: %s\n", dest4_m);

	return 0;
} */