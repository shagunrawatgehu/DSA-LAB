//Given a boolean matrix (contains only 0 and 1) of size m X n where each row is sorted, write an algorithm and a program to find which row has maximum number of 1's. (Linear time complexity)

#include <stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int row = -1, j = n - 1;
    for (int i = 0; i < m; i++) {
        while (j >= 0 && arr[i][j] == 1) {
            j--;
            row = i;
        }
    }

    if (row == -1) printf("Not Present\n");
    else printf("row - %d\n", row + 1);

    return 0;
}
