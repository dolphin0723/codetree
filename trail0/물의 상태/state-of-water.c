#include <stdio.h>

int main() {
    // Please write your code here.

    float n;

    scanf("%f", &n);

    if (n<0){
        printf("%s", "ice");
    }else if(n>=100){
        printf("%s", "vapor");

    }else {
        printf("%s", "water");
    }
    return 0;
}