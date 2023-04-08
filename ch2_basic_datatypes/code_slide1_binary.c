#include <stdio.h>
#include <stdlib.h>  // for atoi function
#include <string.h>
#include <math.h>
#include <errno.h>


#define BUFFER_SIZE 1024  // 1 kilobyte
#define INT_SIZE 32  // int is 32 bits

char* intToBinary(int n);


int main()
{
    long a;
    char buf[1024]; // 1 Kilobyte
    int success;
    char* result;

    do
    {
        printf("enter a number: ");
        if (!fgets(buf, 1024, stdin))
        {
            // reading input failed:
            return 1;
        }
        char *endptr;

        errno = 0;
        a = strtol(buf, &endptr, 10);
        if (errno == ERANGE)
        {
            printf("Sorry, this number is too small or too large.\n");
            success = 0;
        }
        else if (endptr == buf)
        {
            success = 0;
        }
        else if (*endptr && *endptr != '\n')
        {
            success = 0;
        }
        else
        {
            success = 1;
        }
    } while (!success);

    result = intToBinary(a);

    printf("Binary Representation of %li: %s\n", a, result);


    return 0;
}


char* intToBinary(int n) {
    if (n == 0) {
        return "0";
    }
    char *binary = (char *)malloc(sizeof(char) * 33); // int is usually 32-bit in C
    int i = 0;
    while (n > 0) {
        binary[i] = n % 2 + '0';
        n = n / 2;
        i++;
    }
    binary[i] = '\0';
    int len = strlen(binary);
    for (int j = 0; j < len / 2; j++) {
        char tmp = binary[j];
        binary[j] = binary[len - j - 1];
        binary[len - j - 1] = tmp;
    }
    return binary;
}