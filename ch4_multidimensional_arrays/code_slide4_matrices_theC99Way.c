#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MAX_RANDOM_NUMBER 100


int main()
{
    srand((unsigned int)time(NULL));

    int m, n;
    float a[m][n];

    m = 5;
    n = 5;

    // generate matrix of random numbers
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            a[i][j] = rand() % MAX_RANDOM_NUMBER;
    
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++)
            printf("%2f ", a[i][j]);
        printf("\n");
    }

    return 0;
}