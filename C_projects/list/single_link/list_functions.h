#ifndef LIST_FUNCTIONS
#define LIST_FUNCTIONS

#include <stdio.h>
#include <stdlib.h>

/**
 * struct node - Singly linked list
 *
 * @a: integer
 * @link: pointer to the next node
 *
 * Description: A singly linked node structure
 */

struct node
{
  int a;
  struct node *link; 
};

void count_node(struct node *head);
void print_data(struct node *head);
void add_node_end(struct node *head, int data);
#endif
