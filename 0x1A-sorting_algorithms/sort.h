#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Singly linked list node
 *
 * @n: Integer stored in the node
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* print.c */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
/* bubble_sort */
void bubble_sort(int *array, size_t size);
/* insertion_sort_list */
listint_t *get_node_at_index(listint_t *head, size_t index);
size_t list_len(const listint_t *head);
void swap(listint_t *node_a, listint_t *node_b);
void insertion_sort_list(listint_t **list);
/* selection_sort */
void selection_sort(int *array, size_t size);
/* quick_sort */
void quick_sort(int *array, size_t size);
void quick_swap(int *array, int first, int second, size_t size);
int set_pivot(int *array, int start, int stop, size_t size);
void sort(int *array, int start, int stop, size_t size);
/* shell_sort */
void shell_sort(int *array, size_t size);
/* cocktail_sort */
void cocktail_sort_list(listint_t **list);
/* counting_sort */
void counting_sort(int *array, size_t size);
/* merge_sort */
void merge_sort(int *array, size_t size);
void merge_sort_helper(int *array, int *temp, size_t size);
void merge_sort_split(int *temp, int start, size_t end, int *array);
void merge_sort_top_down(int *temp, int start, size_t split, size_t size,
			 int *array);
void copy_array(int *array, int start, size_t size, int *temp);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
/* void sort_deck(deck_node_t **deck); */

#endif /* SORT_H */
