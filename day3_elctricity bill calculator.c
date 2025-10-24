#include<stdio.h>
int main()
{
   int totalbill,units;
   printf("enter total units consumed:");
   scanf("%d",&units);
   //fixed meter charge is 50.00
   if(units==100)
   {
       printf("the rate per unit is 3.00\n");
       totalbill=units*3.00+50.0;
       printf("the total bill is %d\n",totalbill);
   }
else if(units>=101 && units<=200)
{
    printf("the rate per unit is 4.50\n");
    totalbill=units*4.50+50.0;
    printf("the total bill is %d\n",totalbill);
}
else if(units>=201 && units<=300)
{
    printf("the rate per unit is 6.00\n");
    totalbill=units*6.00+50.0;
    printf("the total bill is %d\n",totalbill);
}
else
{
    printf("the rate per unit is 8.00\n");
    totalbill=units*8.00+50.0;
    printf("The total bill including fixed charge is %d\n",totalbill);
}  
return 0;
}