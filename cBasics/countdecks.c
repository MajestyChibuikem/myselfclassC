#include <stdlib.h>
#include <stdio.h>
/**
 * main - count number of cards in decks
 * @decks: number of decks present
 * Return: Always 0 (Success)
*/

int main()
{
    int decks;
    puts("Enter number of decks: ");
    scanf("%i", &decks);
    if(decks < 1){
        puts("that is not a valid number of decks");
        return 1;

    }
    printf("the number of cards are: %i", decks * 52);
    return 0;
}