#include <stdio.h>
#include <stdlib.h>

void skip(char *msg)
{
    puts(msg +6);

}
int main()
{
    int doses[] = {1, 2, 3, 1000};
    printf("enter here %i\n", *(doses+ 3));
    printf("enter here %i\n", 3[doses]);
    char *msg_from_amy = "don't call me";
    skip(msg_from_amy);
    return 0;
}