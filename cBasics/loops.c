#include <stdlib.h>
#include <stdio.h>

int main()
{
    int counter = 0;
    while(counter < 11){
        printf("count %i\n", counter);
        if(counter == 10)
            break;
        counter++;
    }
}