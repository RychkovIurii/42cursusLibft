/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:24:39 by irychkov          #+#    #+#             */
/*   Updated: 2024/04/23 22:18:23 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <stdio.h>

t_list *ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);


void test_ft_lstnew() {
	char *content = "Test content";
	t_list *node = ft_lstnew(content);
	assert(node != NULL);
	assert(node->content == content);
	assert(node->next == NULL);
	free(node);

	node = ft_lstnew(NULL);
	assert(node != NULL);
	assert(node->content == NULL);
	assert(node->next == NULL);
	free(node);

	printf("ft_lstnew: all tests passed!\n");
}

void test_ft_lstadd_front() {
	t_list *head = ft_lstnew("Hello");
	t_list *new_node = ft_lstnew("World");
	ft_lstadd_front(&head, new_node);
	assert(head == new_node);
	assert(head->next != NULL);
	assert(head->next->content == "Hello");
	free(head->next);
	free(head);

	head = NULL;
	new_node = ft_lstnew("First");
	ft_lstadd_front(&head, new_node);
	assert(head == new_node);
	assert(head->next == NULL);
	free(head);

	printf("ft_lstadd_front: all tests passed!\n");
}
/* 
void test_ft_lstnew() {
	char *content = "Test content";
	t_list *node = ft_lstnew(content);

	if (node != NULL && node->content == content && node->next == NULL) {
		printf("ft_lstnew: test with non-null content passed\n");
	} else {
		printf("ft_lstnew: test with non-null content failed\n");
	}
	free(node);

	node = ft_lstnew(NULL);
	if (node != NULL && node->content == NULL && node->next == NULL) {
		printf("ft_lstnew: test with null content passed\n");
	} else {
		printf("ft_lstnew: test with null content failed\n");
	}
	free(node);
}

void test_ft_lstadd_front() {
	t_list *head = ft_lstnew("Hello");
	t_list *new_node = ft_lstnew("World");
	ft_lstadd_front(&head, new_node);

	if (head == new_node && head->next != NULL && head->next->content == "Hello") {
		printf("ft_lstadd_front: test passed\n");
	} else {
		printf("ft_lstadd_front: test failed\n");
	}
	free(head->next);
	free(head);

	head = NULL;
	new_node = ft_lstnew("First");
	ft_lstadd_front(&head, new_node);
	if (head == new_node && head->next == NULL) {
		printf("ft_lstadd_front: test with empty list passed\n");
	} else {
		printf("ft_lstadd_front: test with empty list failed\n");
	}
} */

int main() {
	test_ft_lstnew();
	test_ft_lstadd_front();
	return 0;
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