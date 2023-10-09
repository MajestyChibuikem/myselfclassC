#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contestants[] = {1, 2, 3};
    int *choice = contestants;
    /**
     * cont[0] = 2;
     * cont[1] = cont[2];
     * cont[2] = *choice;
     * 2, 3,
    */
   contestants[0] = 2;
   contestants[1] = contestants[2];
   contestants[2] = *choice;
   printf("%i\n", contestants[2]);
   return 0;
}