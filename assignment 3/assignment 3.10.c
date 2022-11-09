#include<stdio.h>
int main()
{
    int selling_price,cost_price;
    float per;

    printf("Enter selling price");
    scanf("%d",&selling_price);
    printf("Enter cost price");
    scanf("%d",&cost_price);
    if(selling_price-cost_price  > 0){
    per=((cost_price*100)/selling_price);


    printf("profit %d & percentage %f",(selling_price-cost_price), per);
    }
    else{
        per=((selling_price*100)/cost_price);
        printf("loss %d & percentage %f",(cost_price-selling_price),per);


    }






    return 0;
}
