#include "stdlib.h"
#include "stdio.h"
#include "vector.h"

int main() {
  int N;
  printf("Enter size of array: \n");
  scanf("%d", &N);
  printf("Enter array: \n");

  for(int i = 0; i < N; i++) {
    int t;
    scanf("%d", &t);
    append(t);
  }

  printf("Interval for delete: 'A' 'B': \n");

  int a, b;
  scanf("%d %d", &a, &b);

  deleteSome(a, b);
  print();
  free(data);
  return 0;
} 
