#include <stdio.h>

int main() {
    // Please write your code here.

    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    int hap = a+b+c;

    int ave = hap/3;

    int fin = hap-ave;

    printf("%d\n%d\n%d",hap, ave, fin);
    return 0;
}