#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &a[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ", a[i]*a[i]);
    }
    return 0;
}