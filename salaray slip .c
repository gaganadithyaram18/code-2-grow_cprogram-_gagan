#include<stdio.h>
int main()
{
   float basic_salary,gross_salary,netmonthly_salary ;
   float hra_percent, da_percent, tax_percent ;
   int hra,da,tax,res;
    printf("enter basic salary:");
    scanf("%f",&basic_salary);
    printf("enter HAR percentage:\n");
    printf("enter DA percentage:\n");
    printf("enter TAX percentage:\n");
    scanf("%f%f%f",&hra_percent,&da_percent,&tax_percent);
   hra = basic_salary * (hra_percent / 100);
   da = basic_salary * (da_percent / 100);
   tax = basic_salary * (tax_percent / 100);
   gross_salary = basic_salary + hra + da - tax;
     printf("HAR is %d\n ",hra);
     printf("DA is %d\n",da);
     printf("TAX is %d \n",tax);
     printf("GROSS SALARY is %f\n ",gross_salary);
     res=(gross_salary>50000);
     printf("%d",res);
     netmonthly_salary=gross_salary/12;
     printf("net monthly salary is %f",netmonthly_salary);
     return 0;
}