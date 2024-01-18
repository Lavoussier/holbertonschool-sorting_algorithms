#ifndef SORT_H
#define SORT_H
#define FALSE false
#define TRUE true

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void print_array(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swapNodes(listint_t **head, listint_t *before, listint_t *after);
void extract_node(listint_t *node);
void print_list(const listint_t *list);

#endif
