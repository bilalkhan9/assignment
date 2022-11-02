#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the number\n",x);
    scanf("%d,\n",&x);
    printf("enter digit",y);
    scanf("%d",&y);
    x=x*10;
    x=x+y;
    printf("%d",x);

    return 0;
}
