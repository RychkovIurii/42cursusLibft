/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:21:17 by irychkov          #+#    #+#             */
/*   Updated: 2024/04/23 17:07:05 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	while (lst != NULL)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, temp);
		lst = lst->next;
	}
	return (newlist);
}

/* 
void *add_one(void *num)
{
	int *n = (int *)num;
	return (int[]){(*n) + 1};
}

int main()
{
	t_list *list = NULL;
	int nums[] = {1, 2, 3, 4, 5};
	int i;

	// Create a list with some numbers
	for (i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
		ft_lstadd_front(&list, ft_lstnew(&nums[i]));

	// Map the list with add_one function
	t_list *mapped_list = ft_lstmap(list, &add_one, &free);

	// Print the original list
	printf("Original list:\n");
	ft_lstiter(list, &print_int);
	printf("\n");

	// Print the mapped list
	printf("Mapped list (each element incremented by 1):\n");
	ft_lstiter(mapped_list, &print_int);
	printf("\n");

	// Clear the lists
	ft_lstclear(&list, NULL); // no need to delete elements
	ft_lstclear(&mapped_list, NULL);

	return 0;
} */