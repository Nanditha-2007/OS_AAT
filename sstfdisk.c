#include <stdio.h>
#include <stdlib.h>

int main() {
    int req[100], visited[100];
    int n, head, i, j, seek = 0;

    printf("Enter number of requests: ");
    scanf("%d", &n);

    printf("Enter request queue:\n");

    for(i = 0; i < n; i++) {
        scanf("%d", &req[i]);
        visited[i] = 0;
    }

    printf("Enter initial head position: ");
    scanf("%d", &head);

    for(i = 0; i < n; i++) {
        int min = 9999, index = -1;

        for(j = 0; j < n; j++) {
            if(!visited[j] && abs(req[j] - head) < min) {
                min = abs(req[j] - head);
                index = j;
            }
        }

        seek += min;
        head = req[index];
        visited[index] = 1;
    }

    printf("\nTotal seek time using SSTF = %d\n", seek);

    return 0;
}
