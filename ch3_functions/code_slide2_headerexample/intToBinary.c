#include <string.h>
#include <stdlib.h>

#include "slide2.h"


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