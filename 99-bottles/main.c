#include <stdio.h>

#define PHRASE "%d bottles of beer on the wall\n"

int main() 
{
    int bottles = 99;
    while (bottles >= 0) {
        printf(PHRASE, bottles);
        bottles -= 1;
    }
    return 0;
}