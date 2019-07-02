#include <stdio.h>
#define MAX 10

int array[MAX], count;

int largest(int x[], int y);

int main()
{
  for (count = 0; count < MAX; count++)
  {
    printf("Enter an integer value: ");
    scanf("%d", &array[count]);
  }

  // weve gotta pass in the size of the array, so we know where it ends in memory.
  printf("\n\nLargest value = %d\n", largest(array, MAX));
}

int largest(int x[], int y)
{
  int count, biggest = -12000;

  for (count = 0; count < y; count++)
  {
    if (x[count] > biggest)
      biggest = x[count];
  }
  return biggest;
}