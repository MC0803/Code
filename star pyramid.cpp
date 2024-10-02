#include <stdio.h>

int main()
  {
  int size;
  printf("enter number of rows");
  scanf("%d",&size);
  for (int i = 0; i < size; i++) {
    // printing spaces
    for (int j = 0; j < size-i-1; j++) {
      printf(" ");
    }
    // printing number
    for (int k = 0; k < 2*i+1; k++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
