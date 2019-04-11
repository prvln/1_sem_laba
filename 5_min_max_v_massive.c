#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min = 0;
    int max = 0;
    int i = 0;
    int n = 0;


    printf("Vvedite razmer massiva: ");
    scanf("%d", &n);
    int massiv[n];
    printf("Vvedite element massiva:\n");
    for (i = 0; i<n; i++){
                scanf("%d", &massiv[i]);

    }
    max = massiv[0];
    min = massiv[0];
    for (i = 0; i<n; i++){
        if (massiv[i]>max)
            max = massiv[i];
        if (massiv[i]<min)
            min = massiv[i];
    }

    printf("%d /  %d", max  , min   );


    return 0;
}