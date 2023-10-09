#include <stdlib.h>
#include <stdio.h>

/**
 * main - evaluate face values
 * @card_name: the card name
 * @val: card value
 * Return: always 0 (Success)
*/
int main()
{
    char card_name[3];
    puts("Enter card name: ");
    scanf("%2s", card_name);
    int val = 0;

    if (card_name[0] == 'k')
    {
        val = 10;
    }
    else if (card_name[0] == 'q')
    {
        val = 10;
    }
    else if (card_name[0] == 'j')
    {
        val = 10;
    }
    else if (card_name[0] == 'a')
    {
        val = 11;
    }
    else
    {
        val = atoi(card_name);
    }
    
    return 0;
}