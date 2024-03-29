#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct clint_details
{
  char first_name[20];
  char surname[20];
  int age;
  struct clint_details *linker;
} clint;

int main(void)
{
  clint *abc = NULL;

  abc = malloc(sizeof(clint));

  if (abc == NULL)
    {
      free(abc);
      printf("Unable to allocate memory for abc");
      return (1);
    }
  
  strcpy(abc->first_name, "Bill");
  strcpy(abc->surname, "Aglomasa");
  abc->age = 20;

  printf("My firstname is %s while my surname is %s.I am %d old\n", abc->first_name, abc->surname, abc->age);

  free(abc);

  return (0);
}
