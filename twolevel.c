#include <stdio.h>

int main() {
    int users, files, i, j;
    char fname[20][20];

    printf("Enter number of users: ");
    scanf("%d", &users);

    for(i = 0; i < users; i++) {
        printf("\nEnter number of files for user %d: ", i + 1);
        scanf("%d", &files);

        for(j = 0; j < files; j++) {
            printf("Enter file name: ");
            scanf("%s", fname[j]);
        }

        printf("Files of user %d are:\n", i + 1);

        for(j = 0; j < files; j++) {
            printf("%s\n", fname[j]);
        }
    }

    return 0;
}
