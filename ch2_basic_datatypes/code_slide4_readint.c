#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char c;
    if (isdigit(c = getchar())) {
        printf("%c seems like a digit to me! However, its true numerical representation on the computer is %d\n", c, c);
        printf("Here's the correct numerical value from atoi(): %d\n", atoi(&c));
        printf("Here's the correct numerical value from subtracting 0 character: %d\n", c - '0');
    }
    return 0;
}