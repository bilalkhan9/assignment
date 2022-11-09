#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter number 1\n");
    scanf("%d",&x);
    printf("enter number 2\n ");
    scanf("%d",&y);
    printf("enter number 3\n");
    scanf("%d",&z);
    if(x>y&&x>z)
    {
        printf("%d is greatest",x);
    }
    else if(y>x&&y>z)
    {

    printf("%d is greatest",y);
    }
    else if(z>x&&z>y)

        printf("%d is greatest",z);
    else if(x==y||y==z||x==z)
    printf("greatest number is repeated");




    return 0;
}
