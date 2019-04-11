#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m = 0;
	int h = 0;
	int gradh = 0;
	int gradm = 0;
	int grad1 = 0;

    printf("Vvedite hours and minutes:\n");
	scanf("%d %d", &h, &m);

	if (h >= 12) {
		h -= 12;
	}

	gradm = m * 6;
	gradh = h * 30;

	grad1 = gradm - gradh;
	
	if (grad1 >= 180) {
		printf("Ugol mejdu strelkami:\n");
		printf("%d", 360 - grad1);
	}
	else if (grad1 < 0){
	    printf("Ugol mejdu strelkami:\n");
		printf("%d", grad1 - grad1*2);
	}
	else {
		printf("Ugol mejdu strelkami:\n");
		printf("%d", grad1);
	}

	return 0;
}
