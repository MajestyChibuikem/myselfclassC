#include <stdlib.h>
#include <stdio.h>

int larger(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    int greater = larger(100, 1000);
    printf("%i", greater);
    return 0;
}