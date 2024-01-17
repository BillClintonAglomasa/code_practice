#include "list_functions.h"

/**
 * count_node: Count the number of nodes in a singly linked list
 * 
 * @head: A header pointer to the singly linked list
 *
 * Return: Returns Nothing
 */

void count_node(struct node *head)
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
      i++;
      ptr = ptr->link;
    }

  printf("%d\n", i);
  
}
