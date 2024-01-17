#include "list_functions.h"

/**
 * print_data: Print all the data a singly list holds
 * 
 * @head: A header pointer to the singly linked list
 *
 * Return: Returns Nothing
 */

void print_data(struct node *head)
{
  int i;

  if (head == NULL)
    {
      printf("Singly linked list is empty");
    }

  struct node *ptr = head;

  i = 0;
  while (ptr != NULL)
    {
      printf("%d\n", ptr->a);
      ptr = ptr->link;
    }

  printf("%d\n", i);
  
}
