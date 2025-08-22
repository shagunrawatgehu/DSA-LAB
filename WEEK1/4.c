//Given a matrix of size n X n, where every row and every column is sorted in increasing order. Write an algorithm and a program to find whether the given key element is present in the matrix or not. (Linear time complexity)

#include <stdio.h>
int main() {
    int n, key;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &key);
    int i = 0, j = n - 1;
    int found = 0;
    while (i < n && j >= 0) {
        if (arr[i][j] == key) {
            found = 1;
            break;
        } else if (arr[i][j] > key) {
            j--;
        } else {
            i++;
        }
    }
    if (found) printf("Present\n");
    else printf("Not Present\n");
  return 0;}
