#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using INSERTION SORT.
 * @list: Double pointer to a doubly linked list of integers.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *back_node, *temp;

	if (list == NULL || *list == NULL)
		return;

	current = *list;
	while (current->next)
	{
		back_node = current;
		if (back_node->n > back_node->next->n)
		{
			swapNodes(list, back_node, back_node->next);
			temp = back_node->prev;
			while (temp != NULL && back_node->n < temp->n)
			{
				swapNodes(list, temp->prev, back_node);
				temp = back_node->prev;
			}
		}
		if (current->next)
			current = current->next;
	}
}

/**
 * swapNodes - Swaps adjacent nodes in a doubly-linked list.
 * @head: Pointer to the head node.
 * @before: Node before the 'after' node.
 * @after: Node after the 'before' node.
 */
void swapNodes(listint_t **head, listint_t *before, listint_t *after)
{
	int head_swap = FALSE;

	if (*head == before)
		head_swap = TRUE;
	extract_node(after);

	after->prev = before->prev;
	if (before->prev)
		after->prev->next = after;
	after->next = before;
	before->prev = after;
	if (head_swap)
		*head = after;
}
