#include <stdlib.h>
#include <stdio.h>

/**
 * main - evaluate face values
 * @card_name: the card name
 * @val: card value
 * @count: card count
 * Return: always 0 (Success)
*/
int main()
{
    char card_name[3];
    
    int count = 0;

    /*using switch statements*/
    while (card_name[0] != 'x')
    {
        puts("Enter card name: ");
        scanf("%2s", card_name);
        int val = 0;
        switch(card_name[0]){
        case 'k':
        case 'q':
        case 'j':
            val = 10;
            break;
        case 'a':
            val = 11;
            break;
        case 'x':
            continue;
        default:
            val = atoi(card_name);
            /*this loop counts the card*/
        if ((val >= 3) && (val <= 13))
        {
            count++;
        }
        else
        {
            count--;
        }
        }
        printf("current count: %i\n", count);
    }

    
    return 0;
}