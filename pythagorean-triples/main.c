#include <stdio.h>

int my_pow(int x) {
    return x * x;
}

void triangle() 
{
    int x, y, z;

    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter another number: ");
    scanf("%d", &y);
    printf("You entered %d then %d\n", x, y);
    printf("Enter a third number! ");
    scanf("%d", &z);

    if (my_pow(x) + my_pow(y) == my_pow(z)) {
        printf("Right triangle!\n");
    } else {
        printf("Wrong triangle!\n");
    }

    printf("Another?");
}

int main() {

    triangle();

    int c, d;
    d = 1;

    while (d == 1) {
        c = getchar();

        if (c == 'y') {
            triangle();
        } else if (c == 'n') {
            break;
        }
    }
    
    return 0;
}

