#include "general.h"

int main(char argc, char *argv[])
{
  int i;
  int n1 = 7;
  int n2 = 4;
  int a1[] = {5,2,1,2,7,4,5};
  int a2[] = {7,5,1,1};

  printf("A1 array\n");
  for (i = 0; i <  n1; i++)
    printf("a1[%d] = %d\n", i, a1[i]);

  printf("A2 array\n");
  for (i = 0; i <  n2; i++)
    printf("a2[%d] = %d\n", i, a2[i]);

  printf("Checking all elems in a2 are in a1\n");

  int result = (int) contains(a1,n1,a2,n2);
  printf("result = %d\n", result);

  return 0;
}
