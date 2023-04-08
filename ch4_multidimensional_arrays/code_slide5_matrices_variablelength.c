#include <stdio.h>

void print_identity_matrix(int n);

int main()
{
    print_identity_matrix(5);
    return 0;
}

void print_identity_matrix(int n)
{
    float matrix[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(i == j)
                matrix[i][j] = 1.0;
            else
                matrix[i][j] = 0.0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            printf("%.2f ", matrix[i][j]);
        printf("\n");
    }
}