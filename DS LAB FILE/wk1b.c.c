//Given an unsorted array of integers and two numbers a and b. Design an algorithm and write a program to find minimum distance between a and b in this array. Minimum distance between any two numbers a and b present in array is the minimum difference between their indices.

#include <stdio.h>
#include <limits.h>
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, a, b;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        scanf("%d %d", &a, &b);
        int last = -1, minDist = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (arr[i] == a || arr[i] == b) {
                if (last != -1 && arr[i] != arr[last]) {
                    int dist = i - last;
                    if (dist < minDist) minDist = dist;
                }
                last = i;
        }
        }
        if (minDist == INT_MAX) printf("-1\n");
        else printf("%d\n", minDist);
    }  return 0;}
