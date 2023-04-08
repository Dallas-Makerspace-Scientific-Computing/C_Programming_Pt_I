#include <stdio.h>
#include <stdlib.h>

#include "slide2.h"

#define MAX_CHARS 1024
#define INT_SIZE 32

int main()
{
    char* binary_number;
    char message[MAX_CHARS];
    read_message(message, MAX_CHARS);
    binary_number = intToBinary(42);
    printf("This is your message: %s\n", message);
    printf("This is the binary number: %s\n", binary_number);
    free(binary_number);
    return 0;
}