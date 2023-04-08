#include <stdio.h>


int main()
{
    int c;
    if ((c = getchar()) != 'c'){
        printf("You did not put 'c' first into standard input.\n");
    }
    else {
        printf("Holy shit, you actually put the letter 'c' first into standard input. Great chop, champ!\n");
    }
    return 0;
}