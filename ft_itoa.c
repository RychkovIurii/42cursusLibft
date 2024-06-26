/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:35:21 by irychkov          #+#    #+#             */
/*   Updated: 2024/05/03 12:04:44 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits_len(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	else if (n <= 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_helper(int n, int len, int i, char *result)
{
	if (n == -2147483648)
	{
		ft_strlcpy(result, "-2147483648", 12);
		return (result);
	}
	else if (n < 0)
	{
		result[i++] = '-';
		n = -n;
	}
	result[len] = '\0';
	while (len > i)
	{
		len--;
		result[len] = n % 10 + '0';
		n = n / 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*result;

	i = 0;
	len = ft_digits_len(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	return (ft_helper(n, len, i, result));
}

/* 
int	main(void)
{
	ft_digits_len(-11);
	printf("%s\n", ft_itoa(-11));
	ft_digits_len(-4443);
	printf("%s\n", ft_itoa(-4443));
	ft_digits_len(-1);
	printf("%s\n", ft_itoa(-1));
	ft_digits_len(0);
	printf("%s\n", ft_itoa(0));
	ft_digits_len(101);
	printf("%s\n", ft_itoa(101));
	ft_digits_len(-2147483648);
	printf("%s\n", ft_itoa(-2147483648));

	return (0);
} */