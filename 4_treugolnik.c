#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int i = 0;
    int j = 0;
    int u = 0;
    scanf("%d", &a);
    a = a * 2;
    for(i = 0; i < a; i+=2){
        for(j = (a - i)/2; j > 0; j--){
            printf(" ");
        }
        for(u = 1 + 2*i; u > 0; u-=2){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}