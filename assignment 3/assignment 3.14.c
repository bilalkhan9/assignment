#include<stdio.h>
int main()
{
    int number;

    printf("Enter Number\n");
    scanf("%d",&number);
    if((number%7==0)||(number%3==0))
    printf("divisible by both 7 and 3");
    else
        printf("not divisible");

    return 0;
}
