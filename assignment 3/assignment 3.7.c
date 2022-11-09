#include<stdio.h>
int main()
{
    double a,b,c,discriminant,root1,root2,real_part,img_part;
    printf("Enter coefficients a,b and c");
    scanf("%1f,%1f,%1f",&a,&b,&c);

        discriminant=b*b-4*a*c;
        if(discriminant>0)
        {
            printf("real and distinct\n");
        }
        else if(discriminant==0)
        {
            printf("real and different");
        }
        else
            printf("real are not real");



    return 0;
}
