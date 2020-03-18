#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int i = 10;
    while ( i ) //{
        i--;
        if ( i == 5 ) {
            printf("%d\n", i);
        }
    // }
    return 0;
}
