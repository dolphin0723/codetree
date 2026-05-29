#include <stdio.h>
#include <stdbool.h>

int main() {
    // Please write your code here.
    

    int a_math, a_eng;
    int b_math, b_eng;

    scanf("%d %d", &a_math, &a_eng);
    scanf("%d %d", &b_math, &b_eng);

    if(a_math > b_math && a_eng > b_eng){
        printf("%d", a_math > b_math && a_eng > b_eng);
    } else{
        printf("%d", a_math > b_math && a_eng > b_eng);
    }
    return 0;
}