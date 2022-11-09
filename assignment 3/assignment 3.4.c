#include<stdio.h>
int main()
{
    int number;

    printf("Enter Number\n");
    scanf("%d",&number);
    if(number&1)
        printf("Number is Odd");
    else
        printf("number is Even");


    return 0;
}
