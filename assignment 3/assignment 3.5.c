#include<stdio.h>
int main()
{
    int number;

    printf("Enter Number\n");
    scanf("%d",&number);
    if((number>99)&&(number<1000))
        printf("Number is Three digit");
    else
        printf("number is not three digit");


    return 0;
}
