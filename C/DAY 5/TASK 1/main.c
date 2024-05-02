#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct emp {
     int id;
     char name [10];
     int age;
     int salary ;
     int deduction;
     int overtime;
};



int main()
{
    struct emp e1 ;
    printf("plz enter id : ");
    scanf("%d",&e1.id);

     printf("plz enter name : ");
    scanf("%s",e1.name);

     printf("plz enter salary : ");
    scanf("%d",&e1.salary);

    printf("plz enter age : ");
    scanf("%d",&e1.age);

     printf("plz enter deduction : ");
    scanf("%d",&e1.deduction);

     printf("plz enter over time : ");
    scanf("%d",&e1.overtime);

    int totalSalary=0;
    totalSalary=e1.salary+e1.overtime-e1.deduction;

    printf("\n user with data id:%d  name:%s  age:%d has total salary %d ",e1.id,e1.name,e1.age,totalSalary);

    return 0;
}
