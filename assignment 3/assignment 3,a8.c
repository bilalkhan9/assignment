#include<stdio.h>
int main()
{
    int month_name;

    printf("Enter month name");
    scanf("%d",&month_name);

    if((month_name==1)||(month_name==3)||(month_name==5)||(month_name==7)||(month_name==8)||(month_name==10)||(month_name==12))
    {


    printf("month has 31 days\n");
    }
    else if(month_name==2)
    {


        printf("month has 28 or 29 days\n");
    }
    else
        printf("month has 30 days");


    return 0;
}
