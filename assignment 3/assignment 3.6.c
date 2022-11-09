#include<stdio.h>
int main()
{
    int number1,number2;

    printf("Enter Number1\n");
    scanf("%d",&number1);
    printf("Enter Number2\n");
    scanf("%d",&number2);

    if(number1>number2)
        printf("number 1 is greater");
    else if(number2>number1)
        printf("number 2 is greater");
        else
            printf("both are same");


    return 0;
}
