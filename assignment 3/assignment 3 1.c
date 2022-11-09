#include<stdio.h>
int main()
{
    int number;
    printf("Enter number\n");
    scanf("%d",&number);
    if(number<0)
        printf("Number is negative");
    else if(number>0)
        printf("number is positive");
    else
        printf("number is zero");


    return 0;
}
