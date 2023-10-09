#include <stdlib.h>
#include <stdio.h>

void go_south_east(int *lat, int *lon)
{
    *lat = *lat - 1;
    *lon = *lon + 1;
}

void go_south_west(int *lat, int *lon)
{
    *lat = *lat - 1;
    *lon = *lon - 1;
}
int main()
{
    int thislat = 32;
    int thislon = -64;
    go_south_east(&thislat, &thislon);
    printf("avast!!!, we are now at %i, %i \n", thislat, thislon);
    
    go_south_west(&thislat, &thislon);
    printf("avast!!, we are now at [%i, %i],\n", thislat, thislon);
    return 0;
}