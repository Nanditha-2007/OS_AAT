#include <stdio.h>

int main() {
    int f[50], i, j, st, len;

    // Initially all blocks are free
    for(i = 0; i < 50; i++)
        f[i] = 0;

    printf("Enter the starting block: ");
    scanf("%d", &st);

    printf("Enter the length of the file: ");
    scanf("%d", &len);

    // Check if blocks are free
    for(i = st; i < st + len; i++) {
        if(f[i] == 1) {
            printf("Block %d is already allocated\n", i);
            return 0;
        }
    }

    // Allocate blocks
    for(i = st; i < st + len; i++) {
        f[i] = 1;
    }

    printf("\nFile allocated successfully\n");
    printf("Allocated blocks are:\n");

    for(i = st; i < st + len; i++) {
        printf("%d ", i);
    }

    return 0;
}
