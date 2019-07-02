#include <stdio.h>
int var = 1;
int *ptr;

main()
{
  ptr = &var;
  printf("\nDirect access, var=%d", var);
  printf("\nIndirect access, var=%d", *ptr);

  printf("\n\nThe address of var = %d", &var);
  printf("\nThe address of var = %d\n", ptr);

  return 0;
}