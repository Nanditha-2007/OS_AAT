#include <stdio.h>

int main() {
    int mainDir, subDir, files, i, j;

    printf("Enter number of main directories: ");
    scanf("%d", &mainDir);

    for(i = 0; i < mainDir; i++) {

        printf("\nEnter number of sub directories in MainDir %d: ", i + 1);
        scanf("%d", &subDir);

        for(j = 0; j < subDir; j++) {

            printf("Enter number of files in SubDir %d: ", j + 1);
            scanf("%d", &files);

            printf("SubDir %d contains %d files\n", j + 1, files);
        }
    }

    return 0;
}
