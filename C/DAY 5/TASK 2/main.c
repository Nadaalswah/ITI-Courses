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
   struct emp arr[3];
   int i;
   int j;
   int totalSalary=0;
   //printf("%d",arr[1].id);
   for(i=0;i<3;i++)
   {
       printf("-------------------data of emp no %d---------------",i+1);

       printf("\nplz enter id : ");
       scanf("%d",&arr[i].id);
            for(j=0;j<i;j++)
                {
                if (arr[i].id==arr[j].id)
                {
                  printf("this id  exested plz enter another one : ");
                    scanf("%d",&arr[i].id);

                }
              else
                    continue;

            }


     printf("\nplz enter name : ");
    scanf("%s",arr[i].name);

    printf("\nplz enter age : ");
    scanf("%d",&arr[i].age);

     printf("\nplz enter salary : ");
    scanf("%d",&arr[i].salary);


     printf("\nplz enter deduction : ");
    scanf("%d",&arr[i].deduction);

     printf("\nplz enter over time : ");
    scanf("%d",&arr[i].overtime);

   }

      for(i=0;i<3;i++)
      {
         totalSalary=arr[i].salary+arr[i].overtime-arr[i].deduction;
         printf("\n user with data id:%d  name:%s  age:%d has total salary %d \n ",arr[i].id,arr[i].name,arr[i].age,totalSalary);
      }

    return 0;
}



