#include <stdio.h>

#define ISIZE 10

int main()
{
    int i;

    printf("For Loop: ");
    for(i = 0; i < ISIZE; i++){
        printf("%d ", i);
    }


    i = 0;
    printf("\nWhile Loop: ");
    while(i < ISIZE){
        printf("%d ", i++);
    }


    i = 0;
    printf("\nDo-While Loop: ");
    do {
        printf("%d ", i++);
    } while(i < ISIZE);
    printf("\n");

    return 0;
}