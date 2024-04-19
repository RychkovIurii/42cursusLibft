/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:13:10 by irychkov          #+#    #+#             */
/*   Updated: 2024/04/19 10:34:38 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sub_len;
	size_t	s_len;
	size_t	i;
	char	*sub;

	if (!(s))
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start + 1)
		return (NULL);
	sub_len = s_len - start;
	if (len < sub_len)
		sub_len = len;
	sub = (char *)malloc(sizeof(char) * (sub_len + 1));
	if (!(sub))
		return (NULL);
	i = 0;
	while (s[start] && i < sub_len)
	{
		sub[i++] = s[start++];
	}
	sub[i] = '\0';
	return (sub);
}

int	main(void)
{
	char const src[19] = "Hello Hive";
	char const src1[7] = "\0";
	unsigned int index1 = 3;
	unsigned int index2 = 0;
	unsigned int index3 = 20;
	size_t len1 = 3;
	size_t len2 = 0;
	size_t len3 = 1;
	size_t len4 = 20;
	char *result1, *result3, *result5, *result7, *result8;
	char *result2, *result4, *result6;

	result1 = ft_substr(src, index1, len1);
	printf("The substring is: %s\n", result1);
	result2 = ft_substr(src, index1, len2);
	printf("The substring is: %s\n", result2);
	result3 = ft_substr(src, index1, len3);
	printf("The substring is: %s\n", result3);
	result4 = ft_substr(src, index1, len4);
	printf("The substring is: %s\n", result4);
	result5 = ft_substr(src, index2, len1);
	printf("The substring is: %s\n", result5);
	result6 = ft_substr(src, index3, len1);
	printf("The substring is: %s\n", result6);
	result7 = ft_substr(src1, index1, len1);
	printf("The substring is: %s\n", result7);
	result8 = ft_substr(src1, index2, len2);
	printf("The substring is: %s\n", result8);
	return 0;
}