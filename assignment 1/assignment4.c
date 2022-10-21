#include<stdio.h>
int main()
{
int x=5, y=161, z=20, max;

max = (x>y)? ((x<z)? x:z ): ((y>z)? y:z);

printf("maximum is %d",max);
return 0;

}
