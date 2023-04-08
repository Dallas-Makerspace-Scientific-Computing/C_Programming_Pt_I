#include <stdio.h>

#include "slide2.h"

void read_message(char msg[], const int limit)  // function definition
{
    int i, c;
    for(i = 0; i < limit && (c = getchar()) != EOF && c != '\n'; i++)
        msg[i] = c;
    msg[i] = '\0';
}
