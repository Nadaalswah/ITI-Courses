#include <stdio.h>
#include <stdlib.h>

struct emp {
     int id;
     char name [10];
     int age;
     int salary ;

};

int main()
{

    struct emp* ptr=(struct emp*)malloc(sizeof (struct emp));
    printf("enter id ");
    scanf("%d",&ptr->id);

    printf("enter name ");
    scanf("%s",ptr->name);

    printf("enter age ");
    scanf("%d",&ptr->age);

    printf("enter salary ");
    scanf("%d",&ptr->salary);
    //struct emp e1;

    printf("\n employee: id %d  name %s  age %d  salary %d" ,ptr->id, ptr->name ,ptr->salary ,ptr->age);



    return 0;
}
