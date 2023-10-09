#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*assume the char is less than 20*/
    char ex[20];
    puts("Enter girlfriend's name: ");
    scanf("%19s", ex);
    printf("Dear %s,\n\nYou are history", ex);
    return 0; 
}