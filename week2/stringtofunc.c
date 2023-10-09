#include <stdlib.h>
#include <stdio.h>

void pass_string(char msg[])
{
    printf("print out this message: %s\n", msg);

}
void fortune_cookie(char msg[]){
    printf("message reads: %s\n", msg);
}

int main(){
    pass_string("hello!\n");
    char msg[] = "you will be rich";
    printf("sizeof string: %i\n", sizeof(msg));
    int yes;
    fortune_cookie(msg);
}