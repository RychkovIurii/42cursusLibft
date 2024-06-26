/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:19:56 by irychkov          #+#    #+#             */
/*   Updated: 2024/05/03 12:19:14 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i + 1) < n && s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	if ((n == 0) || (s1[i] == s2[i]))
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* 
int	main(void)
{
	size_t	n;
	char	str1[] = "abc\0";
	char	str2[] = "abc\200";

	n = 5;
	printf("%d\n", ft_strncmp(str1, str2, n));
	printf("%d\n", strncmp(str1, str2, n));
} */