#include<stdio.h>
int main()
{
    int number;

    printf("Enter Number\n");
    scanf("%d",&number);
    if((number%2)==0)
        printf("Number is Even");
    else
        printf("number is Odd");


    return 0;
}
