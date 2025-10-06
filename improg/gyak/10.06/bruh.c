#include <stdio.h>
#include <stdbool.h>

#define SIZE 9

int main()
{
    

    for (int y = 0; y < SIZE; y++) {
        

        for (int x = 0;x < SIZE; x++) {
            const bool is_equal = x == y;
            const bool same_sum = x + y == SIZE - 1;

            if (is_equal || same_sum) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n"); //nate higgers
    }

    return 0;
}