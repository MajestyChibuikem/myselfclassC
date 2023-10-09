#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char suit = 'h';
    switch (suit)
    {
    case 'c':
        puts("club");
        break;
    case 'd':
        puts("diamonds");
        break;
    case 'h':
        puts("hearts");
        break;
    default:
        puts("spades");
    }
}