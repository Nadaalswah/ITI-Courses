#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter num1 ");
    int num1 ;
    scanf("%d",&num1);

    printf("enter num2 ");
    int num2 ;
    scanf("%d",&num2);

    int sum= num1+num2;
    int sub= num1-num2;
    int mult= num1*num2;


    printf("sum of numbers = %d \n" ,sum);
    printf("subtraction of numbers = %d \n" ,sub);
    printf("multiplication of numbers = %d \n" ,mult);
    return 0;
}
