#include<stdio.h>
int main()
{
    int number;

    printf("Enter Number\n");
    scanf("%d",&number);
    if((number%5)==0)
        printf("Number is divisible");
    else
        printf("number is not divisible");


    return 0;
}
