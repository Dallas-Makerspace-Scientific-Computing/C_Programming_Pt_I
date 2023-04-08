#include <stdio.h>
#include <ctype.h>

#define MAX_CHARS 100

int main()
{
    int i, c, length;
    char chararray[MAX_CHARS];

    length = 0;
    for(i = 0; i < MAX_CHARS && (c = getchar()) != EOF && isdigit(c); i++){
        chararray[i] = c - '0';
        length++;
    }
    
    for(i = 0; i < length; i++) {
        printf("%d", chararray[i]);
    }
    printf("\n");
    
}