#include <stdio.h>

int main() {
    // Please write your code here.

    int n;

    scanf("%d", &n);

    if(n>=3000){
        printf("%s", "book");
    }else if(1000<=n && n<3000){
        printf("%s", "mask");
    }else{
        printf("%s", "no");
    }
    return 0;
}