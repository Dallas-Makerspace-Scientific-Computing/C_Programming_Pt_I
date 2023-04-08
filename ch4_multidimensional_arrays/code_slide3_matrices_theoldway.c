#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MAX_RANDOM_NUMBER 100


int main()
{
    srand((unsigned int)time(NULL));

    int m, n;
    int *a;

    m = 5;
    n = 5;

    int i, j;
    a = malloc(m * n * sizeof(int));
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            a[i*n + j] = rand() % MAX_RANDOM_NUMBER;
    
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++)
            printf("%2d ", a[i*n + j]);
        printf("\n");
    }

    return 0;
}