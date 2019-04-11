#include <stdio.h>
#include <stdlib.h>

int main()
{
  int minsumm = 0;
  int i = 0;
  int n = 0;

  printf("Vvedite razmer massiva: ");
  scanf("%d", &n);
  
    if (n <= 1)
	{
	printf("ERROR: VVEDITE BOLEE 1 ELEMENTA!!11!!11!!\n");
	return 0;
  }
  
  
  int massiv[n];
  printf("Vvedite elementbI massiva:\n");
  for (i = 0; i < n; i++) {
    if (i > 0 && massiv[i - 1] > 9) {
      printf("\033[2;%dH ", i * 3 + 27);
    }
    else {
      printf("\033[2;%dH ", i * 2 + 27);
    }
    scanf("%d", &massiv[i]);
  }
  minsumm = massiv[0] + massiv[1];
  printf("\033[3H\033[KElements with minimal summ: %d %d", massiv[0], massiv[1]);
  
  for (i = 0; i < n - 1; i++) {
    if (massiv[i] + massiv[i + 1] < minsumm)
		printf("\033[3H\033[KElements with minimal summ: %d %d", massiv[i], massiv[i + 1]);
		minsumm = massiv[i] + massiv[i + 1];
  }
  
  return 0;
}