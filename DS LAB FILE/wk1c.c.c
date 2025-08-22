//Given an array of nonnegative integers, where all numbers occur even number of times except one number which occurs odd number of times. Write an algorithm and a program to find this number. (Time complexity = O(n))


int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        int arr[n], res = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            res ^= arr[i];
        }
        if (res == 0) printf("No such element present\n");
        else printf("%d\n", res);
    }
    return 0;
}                    
