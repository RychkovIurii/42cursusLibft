/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:13:10 by irychkov          #+#    #+#             */
/*   Updated: 2024/04/18 19:12:47 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{

	size_t	sub_len;
	size_t s_len;
	char	*sub;

	if (!(*s))
		return (NULL);
	s_len = ft_strlen(s);
	sub_len = s_len - start;
	if (len < sub_len)
		sub_len = len;
	sub = (char *)malloc(sizeof(char) * (sub_len + 1));
	if (!(*sub))
		return NULL;
	while (s[start])
	{
		*sub++ = s[start++];
	}
	*sub++ = '\0';
	return (sub);
}

int	main(void)
{
	char const src[60] = "Hello Hive";
	int index = 3;


}