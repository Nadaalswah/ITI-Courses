#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   printf("Enter number plz: ");
   scanf("%d",&num);

   int reverse = 0;
   int remainder;
//123


   while (num != 0) {
    remainder = num % 10;
    reverse = reverse * 10 + remainder;
    num /= 10;

  }

  printf("Reversed number = %d", reverse);

    return 0;
}
/*
int main()
{
   int num;
   printf("Enter number plz: ");
   scanf("%d",&num);

   int arr[10];
  
   int remainder;
   int i=0;
   while (num != 0) {
    remainder = num % 10;
    
    arr[i]=remainder;
    num /= 10;
    i++;

  }
   int j;
   for(j=0;j<sizeof(num)+1;j++)
     printf("%d", arr[j]);
   printf("\n");
    return 0;
}

*/
