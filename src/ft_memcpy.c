/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:39:01 by irychkov          #+#    #+#             */
/*   Updated: 2024/04/17 18:07:15 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;

	temp_src = (unsigned char *)src;
	temp_dst = (unsigned char *)dst;
	while (n > 0)
	{
		*temp_dst = *temp_src;
		n--;
		temp_dst++;
		temp_src++;
	}
	return (dst);
}
/* int main () {
	const char src[50] = "Hive is here";
	char dest[50];
	const char src2[50] = "Hive is here";
	char dest2[50];

	strcpy(dest,"Heloooo!!");
	strcpy(dest2,"Heloooo!!");
	printf("Before memcpy dest = %s\n", dest);

	memcpy(dest, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dest);
	ft_memcpy(dest2, src2, ft_strlen(src2)+1);
	printf("After ft_memcpy dest2 = %s\n", dest2);

	return(0);
} */