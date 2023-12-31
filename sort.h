#ifndef __SORT__
#define __SORT__

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

/* definitions and declaration */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* bubble_sort */
void bubble_sort(int *array, size_t size);

/* insertion_sort_list */
void insertion_sort_list(listint_t **list);

/* selection_sort */
void selection_sort(int *array, size_t size);

/* quick_sort */
void quick_sort(int *array, size_t size);

/* _quick_sort */
void _quick_sort(int *a, int low, int high, int size);

#endif
