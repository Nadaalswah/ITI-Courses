#include <stdio.h>
#include <stdlib.h>

int main()
{   char fname[10];
    char lname[10];
    char fullname[20]="";

    printf("enter frist name: ");
    scanf("%s",fname);
     printf("enter last name: ");
     scanf("%s",lname);

     strcat(fullname,fname);
     strcat(fullname," ");
     strcat(fullname,lname);
      printf("full name is: %s",fullname);

    return 0;
}
