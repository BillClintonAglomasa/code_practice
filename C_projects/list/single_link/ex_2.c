#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 *
 * Description: Create a linked list with 3 nodes
 */

struct node
{
  int a;
  struct node *link;
};

int main(void)
{
  struct node *head = NULL;
  head = malloc(sizeof(struct node));
  head->a = 45;
  head->link = NULL;

  struct node *current = malloc(sizeof(node));
  current->a = 98;
  current->link = NULL;
  head->link = current;

  struct node *current_1 = malloc(sizeof(node));
  current_1->a = 3;
  current_1->link = NULL;
  current->link = current_1;

  printf("%d\n", current_1->a);
  
  return(0);
}
