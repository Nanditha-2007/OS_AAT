#include <stdio.h>
#include <string.h>

struct file {
    char name[20];
};

int main() {
    int n, i;
    struct file f[20];

    printf("Enter number of files: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter file %d name: ", i + 1);
        scanf("%s", f[i].name);
    }

    printf("\nFiles in directory are:\n");

    for(i = 0; i < n; i++) {
        printf("%s\n", f[i].name);
    }

    return 0;
}
