#include <stdio.h>

int main()
{
    int age;
    printf("enter ur age for checking ur voting period");
    scanf("%d",&age);
    if(age>=18){
        printf("ur eligible for voting");
    }else{
        printf("u r not eligible");
    }

    return 0;
}
