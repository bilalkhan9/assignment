#include<stdio.h>
int main()
{

float English,Urdu,Math,Physics,Computer,Total_Marks,Percentage;
printf("Enter Numbers\n");
scanf("%f%f%f%f%f",&English,&Urdu,&Math,&Physics,&Computer);

Total_Marks=English+Urdu+Math+Physics+Computer;
    printf("Total Marks is %f\n",Total_Marks);

Percentage=(Total_Marks/500)*100;
printf("Percentage is %f\n",Percentage);

if(Percentage>33)
{
    printf("passed");
}
else
    printf("fail");

return 0;
}
