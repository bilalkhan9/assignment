#include<stdio.h>
int main()
{
    char Character ;
    printf("Enter Character\n");
    scanf("%c",&Character);


    if((Character>='A')&&(Character<='Z'))
        printf("Upper\n");
        else if((Character>='a')&&(Character<='z'))
            printf("Lower\n");
            else if((Character>=48)&&(Character<=57))
                printf("digit\n");
            else
                printf("special Character");

    return 0;
}
