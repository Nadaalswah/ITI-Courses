#include <stdio.h>
#include <stdlib.h>
#define rows 2
#define cols 2

int main()
{
   int arr[rows][cols];
   //scan data
   int i=0, j=0;

   for(i=0;i<rows;i++)
   {
      for(j=0;j<cols;j++){
        printf("enter num for arr[%d][%d]:", i, j);
        scanf("%d",&arr[i][j]);}
   }

    for(i=0;i<rows;i++)
   {
      for(j=0;j<cols;j++){
        printf("%d \t", arr[i][j]);

      }
      printf("\n");
      }

      int sum[rows]={0};
      for(i=0;i<rows;i++)
      {
      for(j=0;j<cols;j++){
        sum[i]+= arr[i][j];

      }
      printf("sum of row %d =%d \n",i+1,sum[i]);
      }


      int avg[cols]={0};
      for(i=0;i<cols;i++)
      {
      for(j=0;j<rows;j++){
        avg[i]+= arr[i][j];

      }
      avg[i]=avg[i]/rows;
      printf("avg of col %d =%d \n",i+1,avg[i]);
      }



      


return 0;
}


