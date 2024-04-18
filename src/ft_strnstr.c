/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:17:38 by irychkov          #+#    #+#             */
/*   Updated: 2024/04/18 12:24:49 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr_haystack;

	ptr_haystack = (char *)haystack;
	if (!(*needle))
		return (ptr_haystack);
	while (*ptr_haystack && len > 1)
	{
		if (ft_strncmp(ptr_haystack, needle, len) == 0)
		{
			return (ptr_haystack);
		}
		++ptr_haystack;
	}
	return (0);
}
/* 
int main () {
	char haystack[20] = "Hello.Hive.Five";
	char haystack2[20] = "\0";
	char needle[10] = ".H";
	char needle2[10] = ".Ha";
	char needle3[10] = "\0";
	size_t len = 6;
	size_t len2 = 1;
	size_t len3 = 0;
	char *result, *result3, *result5, *result7, *result8;
	char *result2, *result4, *result6;

	result = strnstr(haystack, needle, len);
	result2 = ft_strnstr(haystack, needle, len);
	printf("The substring is: %s\n", result);
	printf("The substring is: %s\n\n", result2);

	result = strnstr(haystack, needle, len2);
	result2 = ft_strnstr(haystack, needle, len2);
	printf("The substring is: %s\n", result);
	printf("The substring is: %s\n\n", result2);

	result = strnstr(haystack, needle, len3);
	result2 = ft_strnstr(haystack, needle, len3);
	printf("The substring is: %s\n", result);
	printf("The substring is: %s\n\n", result2);

	result3 = strnstr(haystack, needle2, len);
	result4 = ft_strnstr(haystack, needle2, len);
	printf("The substring is: %s\n", result3);
	printf("The substring is: %s\n\n", result4);

	result3 = strnstr(haystack, needle2, len2);
	result4 = ft_strnstr(haystack, needle2, len2);
	printf("The substring is: %s\n", result3);
	printf("The substring is: %s\n\n", result4);

	result3 = strnstr(haystack, needle2, len3);
	result4 = ft_strnstr(haystack, needle2, len3);
	printf("The substring is: %s\n", result3);
	printf("The substring is: %s\n\n", result4);

	result5 = strnstr(haystack, needle3, len);
	result6 = ft_strnstr(haystack, needle3, len);
	printf("The substring is: %s\n", result5);
	printf("The substring is: %s\n\n", result6);

	result5 = strnstr(haystack, needle3, len2);
	result6 = ft_strnstr(haystack, needle3, len2);
	printf("The substring is: %s\n", result5);
	printf("The substring is: %s\n\n", result6);

	result5 = strnstr(haystack, needle3, len3);
	result6 = ft_strnstr(haystack, needle3, len3);
	printf("The substring is: %s\n", result5);
	printf("The substring is: %s\n\n", result6);

	result7 = strnstr(haystack2, needle, len);
	result8 = ft_strnstr(haystack2, needle, len);
	printf("The substring is: %s\n", result7);
	printf("The substring is: %s\n\n", result8);
	return(0);
} */