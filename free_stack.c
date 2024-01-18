#include "monty.h"
/**
* free_stack - frees a doubllinked list
* @head: header of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
