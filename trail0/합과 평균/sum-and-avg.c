#include <stdio.h>

int main() {
    // Please write your code here.

    int A,B;

    scanf("%d %d", &A, &B);

    int score = A+B;

    float ave = (float)score/2;

    printf("%d %.1f", score, ave);


    return 0;
}