/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:12:29 by irychkov          #+#    #+#             */
/*   Updated: 2024/04/18 10:41:56 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr_s;
	int		s_len;

	ptr_s = (char *)s;
	s_len = ft_strlen(s);
	ptr_s += s_len - 1;
	if (c == 0)
		return (ptr_s + 1);
	while (*ptr_s)
	{
		if (*ptr_s == (char)c)
		{
			return (ptr_s);
		}
		ptr_s--;
	}
	return (0);
}
/* 
int main () 
{
	const char str[] = "Hello.Hive.Five";
	const char ch = '.';
	const char ch2 = 'D';
	const char ch3 = '\0';
	char *result, *result2, *result3;
	char *result4, *result5, *result6;

	result = strrchr(str, ch);
	result2 = ft_strrchr(str, ch);

	printf("String after orig |%c| is - |%s|\n", ch, result);
	printf("String after mine |%c| is - |%s|\n", ch, result2);

	result3 = strrchr(str, ch2);
	result4 = ft_strrchr(str, ch2);

	printf("String after orig |%c| is - |%s|\n", ch2, result3);
	printf("String after mine |%c| is - |%s|\n", ch2, result4);

	result5 = strrchr(str, ch3);
	result6 = ft_strrchr(str, ch3);

	printf("String after orig |%c| is - |%s|\n", ch3, result5);
	printf("String after mine |%c| is - |%s|\n", ch3, result6);
	
	return(0);
}  */