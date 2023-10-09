#include <stdlib.h>
#include <stdio.h>

void using_fgets(char *who)
{
    printf("enter your name: ");
    fgets(who, sizeof(who), stdin);
    puts(who);
}
int main()
{
    char name[40];
    int age;
    printf("Enter name: ");
    scanf("%39s", name);
    printf("Enter age: ");
    scanf("%i", &age);
    char first_name[20];
    char last_name[20];
    printf("Enter your first and last name: ");
    scanf("%19s %19s", first_name, last_name);
    printf("first: %s, last: %s\n", first_name, last_name);
    return 0;
}