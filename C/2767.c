#include <stdio.h>

int main(void) {
    int arr[21] = {};
    int k, n;
    scanf("%d %d", &k, &n);

    for(int i=1; i<=k; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=k+1; i<=n; i++) {
        for(int j=i-1; j>=i-k; j--) {
            arr[i] += arr[j];
        }
    }
    printf("%d", arr[n]);

    return 0;
}
