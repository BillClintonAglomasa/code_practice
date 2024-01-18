#include "list_functions.h"

/**
 * add_node_end: Add a node to the end of a singly linked list
 * 
 * @head: A pointer to the head of singly linked list
 * @data: The data to be added
 *
 * Return: Returns Nothing
 */

void print_data(struct node *head, int data)
{
  int i;
  struct node ptr, temp = NULL;

  if (head == NULL)
    {
      printf("List is empty");
    }
  
  ptr = head;
  temp = malloc(sizeof(struct node));
  temp->a = data;
  temp->link = NULL;

  i = 0;
  while (ptr->link != NULL)
    {
      ptr = ptr->link;
      i++;
    }
  ptr->link = temp;
}
