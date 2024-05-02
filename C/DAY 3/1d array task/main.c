#include <stdio.h>
#include <stdlib.h>
#define size 5
int main()
{
   int oneDimArr[size]={0};
   int i;
   for(i=0;i<size;i++)
   {
       printf("%d \t ",oneDimArr[i]);
   }

   int j;
   int scanArr[size];
   int sum=0;
   for(j=0;j<size;j++)
   {
    printf("\n plz enter num %d :",j+1);
       scanf("%d",&scanArr[j]);
       sum=sum+scanArr[j];
   }
   printf(" our array is>>   ");
   for(i=0;i<size;i++)
   {
       printf(" %d \t ",scanArr[i]);
   }
   printf("\n the sum = %d",sum);

    int max =scanArr[0];
    for(i=0;i<size;i++)
    {
        if (max<scanArr[i])
            max=scanArr[i];
    }
    printf("\n the max num =%d",max);


    int min =scanArr[0];
    for(i=0;i<size;i++)
    {
        if (min>scanArr[i])
            min=scanArr[i];
    }
    printf("\n the min num =%d",min);

     int target;
     printf("\n inter target number:");
     scanf("%d",&target);
      for(i=0;i<size;i++)
    {
        if (target==scanArr[i])
           printf(" num %d in index %d of our array",target,i);


    }






    return 0;
}
