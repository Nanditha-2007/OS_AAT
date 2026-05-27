#include <stdio.h>

int main() {
    int f[50], n, i, block;

    for(i = 0; i < 50; i++)
        f[i] = 0;

    printf("Enter number of blocks: ");
    scanf("%d", &n);

    printf("Enter the blocks:\n");

    for(i = 0; i < n; i++) {
        scanf("%d", &block);

        if(f[block] == 0) {
            f[block] = 1;
        }
        else {
            printf("Block %d already allocated\n", block);
            return 0;
        }
    }

    printf("\nFile allocated using linked allocation\n");

    return 0;
}
