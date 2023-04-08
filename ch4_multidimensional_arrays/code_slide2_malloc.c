#include <stdio.h>
#include <ctype.h>
#include <errno.h>
#include <stdlib.h>

#define INT_SIZE 32

void read_number_input(long *number);
void read_message(char msg[], const int limit);



// the main function is what is important here
int main()
{
   long size_of_message;
   char *message;
   read_number_input(&size_of_message);  // there is literally no reason to do it this way other than to show off passing pointers lol
   message = malloc(size_of_message * sizeof(char));
   printf("Input your message: ");
   read_message(message, size_of_message);
   printf("Your message is '%s' and it had a maximum size of %li ", message, size_of_message);
   free(message);
   return 0;
}



// ignore this function
void read_number_input(long *number)
{
    char buf[1024]; // 1 Kilobyte
    int success;
    char* result;

    do
    {
        printf("enter a number: ");
        if (!fgets(buf, 1024, stdin))
        {
            // reading input failed:
            printf("failed to read");
            exit(1);
        }
        char *endptr;

        errno = 0;
        *number = strtol(buf, &endptr, 10);
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
}


void read_message(char msg[], const int limit)  // function definition
{
    int i, c;
    for(i = 0; i < limit && (c = getchar()) != EOF && c != '\n'; i++)
        msg[i] = c;
    msg[i] = '\0';
}