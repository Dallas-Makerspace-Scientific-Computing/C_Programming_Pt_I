#include <stdio.h>

#define MAX_CHARS 1024

void read_message(char msg[], int limit); // function declaration

int main()
{
    char message[MAX_CHARS];
    read_message(message, MAX_CHARS);
    printf("This is your message: %s\n", message);
    return 0;
}

void read_message(char msg[], const int limit)  // function definition
{
    int i, c;
    for(i = 0; i < limit && (c = getchar()) != EOF && c != '\n'; i++)
        msg[i] = c;
    msg[i] = '\0';
}

