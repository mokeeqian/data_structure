#include <stdio.h>
int fact( int n ) {
    if( n == 1 ) {
        return n;
    }
    return n * fact(n-1);
}

int main(int argc, char const *argv[])
{
    int a = fact(4);
    printf("%d\n", a);
    return 0;
}
