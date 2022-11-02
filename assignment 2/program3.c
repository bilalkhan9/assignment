#include<stdio.h>
int main()
{
    int x=12,y=34,z;
    z=x;
    x=y;
    y=z;

    printf("x = %d ,y = %d ",x,y);

    return 0;
}
