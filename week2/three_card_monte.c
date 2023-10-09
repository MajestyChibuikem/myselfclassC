#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point - shuffle three letters
 * and find position of Q
 * @cards[]: array variable
*/
int main()
{
    char cards[] = "JQK";
    char a_card = cards[2];
    // added puts func to keep track of code
    cards[2] = cards[1];
    puts(cards);
    cards[1] = cards[0];
    puts(cards);
    cards[0] = cards[2];
    puts(cards);
    cards[2] = cards [1];
    puts(cards);
    cards[1] = a_card;
    puts(cards);
    return 0;
}