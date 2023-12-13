#include <stdio.h>

int main() {
    int rows = 5;
    int count = 1;
    int i;
    int j;
    for ( i = 1; i <= rows; ++i) {
        for ( j = 1; j <= i; ++j) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
}

