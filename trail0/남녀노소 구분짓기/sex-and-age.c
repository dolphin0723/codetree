#include <stdio.h>

int main() {
    // Please write your code here.
    int sex, age;

    scanf("%d %d", &sex, &age);

    if(sex==0){ //남자라면,
        if(age>=19){
            printf("MAN");

        }else{
            printf("BOY");
        }

    }else{ //여자라면, 
        if(age>=19){
            printf("WOMAN");

        }else{
            printf("GIRL");
        }
    }
    return 0;
}