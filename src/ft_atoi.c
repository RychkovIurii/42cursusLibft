/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:39:01 by irychkov          #+#    #+#             */
/*   Updated: 2024/04/24 18:06:18 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_helper_atoi(const char *str, int *sign)
{
	int	index;

	index = 0;
	while (str[index] == 32 || (str[index] >= 9 && str[index] <= 13))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			*sign = -1;
		index++;
	}
	return (index);
}

int	ft_atoi(const char *str)
{
	long long int	check;
	long long int	result;
	int				sign;
	int				i;

	result = 0;
	sign = 1;
	i = ft_helper_atoi(str, &sign);
	while (str[i] >= '0' && str[i] <= '9')
	{
		check = result;
		result = result * 10 + sign * (str[i] - '0');
		if (result > check && sign < 0)
			return (0);
		if (result < check && sign > 0)
			return (-1);
		i++;
	}
	return (result);
}
/* 
#include <stdlib.h>
#include <stdio.h>
int main()
{
	char str[] = "   	-808";
 
	int result = ft_atoi(str);
	int result2 = atoi(str);
	printf("my 		= %d\n", result);
	printf("original 	= %d\n", result2);

	return 0;
} */