#include "list_functions.h"

/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 *
 * Description: Create a linked list with 3 nodes but using
 * head->link->link structure 
 */


int main(void)
{
  struct node *head = NULL;
  head = malloc(sizeof(struct node));
  head->a = 45;
  head->link = NULL;

  struct node *current = malloc(sizeof(struct node));
  current->a = 98;
  current->link = NULL;
  head->link = current;

  current = malloc(sizeof(struct node));
  current->a = 3;
  current->link = NULL;
  head->link->link = current;

  count_node(head);
  
  return(0);
}
