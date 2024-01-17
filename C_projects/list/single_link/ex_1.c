#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 *
 * Description: Create a linked list with two nodes
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

  printf("%d\n", head->a);
  
  return(0);
}
