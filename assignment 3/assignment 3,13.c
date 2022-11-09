#include<stdio.h>
int main()
{
    int number;
    printf("Enter Number\n");
    scanf("%d",&number);
    if((number%3==0)&&(number%2==0))
        printf("number is divisible");
    else
        printf("number is not divisible");


    return 0;
}
