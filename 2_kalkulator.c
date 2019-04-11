#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int1 = 0;
    int int2 = 0;

    char znak = 0;
    int deistvie = 0;

    float f1 = 0;
    float f2 = 0;

    scanf("%d %c %d", &int1, &znak, &int2);

    if(znak == '+'){
        deistvie = 1;
    }else if(znak == '-'){
        deistvie = 2;
    }else if(znak == '*'){
        deistvie = 3;
    }else if(znak == '/'){
        deistvie = 4;
        f1 = (float)int1;
        f2 = (float)int2;
    }else if(znak == '%'){
        deistvie = 5;
    }else{
        printf("ERROR");
        return 0;
    }

    switch(deistvie){
        case 1:
            printf("%d", int1 + int2);
            break;

        case 2:
            printf("%d", int1 - int2);
            break;

        case 3:
            printf("%d", int1 * int2);
            break;

        case 4:
            printf("%.2f", f1 / f2);
            break;

        case 5:
            printf("%d", int1 % int2);
            break;

    }
    return 0;
}