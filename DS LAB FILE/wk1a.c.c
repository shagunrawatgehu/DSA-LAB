//Given an array of integers, write an algorithm and a program to left rotate the array by specific number of elements.
#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, k;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &k);
        k = k % n;
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[(i + k) % n]);
        }
        printf("\n");
    }
    return 0;
}
