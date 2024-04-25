/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 00:29:42 by irychkov          #+#    #+#             */
/*   Updated: 2024/04/25 13:18:16 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}

/* 
#include <stdio.h>

void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%d ", *(int *)lst->content);
		lst = lst->next;
	}
	printf("\n");
}

int	main(void)
{
	int		num;
	int		num2;
	int		num3;
	t_list	*node;
	t_list	*node2;
	t_list	*node3;

	num = 1986;
	node = ft_lstnew(&num);
	printf("Content of node1: %d\n", *(int *)node->content);
	printf("Next pointer of node1: %p\n", (void *)node->next);

	num2 = 10;
	num3 = 20;
	node2 = ft_lstnew(&num2);
	node3 = ft_lstnew(&num3);
	ft_lstadd_front(&node, node2);
	ft_lstadd_back(&node, node3);

	printf("Contents of the list:\n");
	print_list(node);

	while (node != NULL)
	{
		t_list *tmp = node->next;
		free(node);
		node = tmp;
	}

	return (0);
} */