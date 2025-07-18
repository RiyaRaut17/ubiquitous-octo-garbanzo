#include <stdio.h>

int main() { int i, j; int n = 3; // Controls the height of the middle row

// Top half including middle row
for(i = 1; i <= n; i++) {
    for(j = 1; j <= n - i; j++)
        printf("  "); // Print leading spaces

    for(j = 1; j <= i; j++)
        printf("%d   ", i); // Print number with space

    printf("\n");
}

// Bottom half
for(i = n + 1; i <= 2 * n - 1; i++) {
    for(j = 1; j <= i - n; j++)
        printf("  "); // Print leading spaces

    for(j = 1; j <= 2 * n - i; j++)
        printf("%d   ", i); // Print number with space

    printf("\n");
}

return 0;
}