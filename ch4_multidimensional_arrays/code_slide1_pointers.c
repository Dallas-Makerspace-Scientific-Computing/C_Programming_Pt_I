#include <stdio.h>



int main()
{
    int x = 2;
    int *ptr_x = &x;
    printf("Value of x is: %d\n", x);
    printf("Address of x is: %d\n", ptr_x);
    printf("Value of x again, but from dereferencing the pointer: %d\n", *ptr_x);

    printf("Arrays and pointers are really the same thing.");
    int array[5] = {1, 2, 3, 4, 5};
    printf("Value of array[1] using pointer arithmetic: %d\n", *(array + 1));
    printf("Value of array[1] using array indexing: %d\n", array[1]);


    return 0;
}


