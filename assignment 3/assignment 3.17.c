#include<stdio.h>
int main()
{
    int x,y,z,flag=0;

    printf("Enter value of a,b and c\n");
    scanf("%d%d%d",&x,&y,&z);

    if (x>y)
    {
        flag=((y+z)>x);
    }
    else if(y>z)
    {
        flag=((x+z)>y);
    }
    else
    {


        flag=((x+y)>z);
    }
    if(flag)
    {
     printf("Valid triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }




    return 0;
}
