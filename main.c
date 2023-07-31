#include <stdio.h>
#include <stdlib.h>

int main()
{
    //7
      float add_1=0,basic_salary,bonus,mo_remun;
    int add_2=0,mo_sales,year;
    char city;


    printf("Enter monthly sales:\n");
    scanf("%d",&mo_sales);
    printf("Enter basic salary:\n");
    scanf("%f",&basic_salary);

    if(0<mo_sales<25000)
        bonus=(mo_sales*10.0/100.0);

    else if (25000<mo_sales<50000)
        bonus=(mo_sales*12.0/100.0);

    else
        bonus=(mo_sales*15.0/100.0);

    printf("bonus = %.2f\n",bonus);

    printf("Enter years of service time:\n");
    scanf("%d",&year);

    if(year>5)
        add_1=(basic_salary*10.0/100.0);
    printf("additional allowance = %f\n",add_1);

     printf("Enter city of working (if city is Colombo, enter 'c'): ");
    scanf(" %c", &city);

    if (city == 'c')
        add_2 = add_2 + 2500;
    printf("additional allowance = %d\n", add_2);

    mo_remun=bonus+basic_salary+add_1+add_2;
    printf("monthly remuneration = %f",mo_remun);







    //6

    char value;

    printf("enter a value =\n");
    scanf("%c",&value);
    printf("integer value of %c = %d\n",value,value);

    //5
    int n1,n2;

    printf("Enter first value:\n");
    scanf("%d",&n1);
    printf("Enter second value:\n");
    scanf("%d",&n2);

    if(n1%n2==0)
        printf("\n%d is multiple of %d\n",n1,n2);
    else
        printf("\n%d is not multiple of %d\n",n1,n2);
    return 0;
}
