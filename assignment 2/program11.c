#include<stdio.h>
int main()
{
    float inr,usd=0;
    printf("Enter value of inr\n");
    scanf("%f",&inr);
    usd=(inr/76.23);
    printf("inr value = %.2f , usd value=%.2f ",inr,usd);

    return 0;
}
