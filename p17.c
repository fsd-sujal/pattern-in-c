#include <stdio.h>

int main() {
    int rows = 5;
    char ch = 'A';
    int i,j;
    for ( i = 1; i <= rows; ++i) {
        for ( j = 1; j <= i; ++j) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}

