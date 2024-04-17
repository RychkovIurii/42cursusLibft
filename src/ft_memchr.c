/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:03:50 by irychkov          #+#    #+#             */
/*   Updated: 2024/04/17 18:08:36 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;

	ptr_s = (unsigned char *)s;
	while (n)
	{
		if (ptr_s[n] == (unsigned char)c)
		{
			return (ptr_s);
		}
		ptr_s++;
		n--;
	}
	return (NULL);
}
/* 
int main () {
	const char str[] = "Hello.Hive.Five";
	const char ch = '.';
	char *ret;

	ret = memchr(str, ch, strlen(str));

	printf("String after |%c| is - |%s|\n", ch, ret);

	return(0);
} */