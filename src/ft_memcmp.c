/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:08:50 by irychkov          #+#    #+#             */
/*   Updated: 2024/04/17 19:26:34 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	while (ptr_s1 && ptr_s2 && (ptr_s1 == ptr_s2) && n>0)
	{
		n--;
		ptr_s1++;
		ptr_s2++;
	}
	if ((n == 0) || (ptr_s1 == ptr_s2))
		return (0);
	else
		//return (ptr_s1 - ptr_s2);
		return (0);
}

int	main(void)
{
	size_t	n;
	char	str1[] = "abd\0";
	char	str2[] = "abc\200";

	n = 6;
	//printf("%d", memcmp(str1, str2, n));
	printf("%d", ft_memcmp(str1, str2, n));
}