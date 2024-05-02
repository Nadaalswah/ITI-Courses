#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
#define null -32
#define locsNUM 10

struct emp {
     int id;
     char name [15];
     int age;
     int salary ;
     int deduction;
     int overtime;
};



int locIdFlage;
int bfIdFlage;


void newEMP(struct emp arr[]);
int checkIdloc (int id ,int locc );
void takeEmpdata(struct emp arr[],int location);
int checkIdsBefor(struct emp arr[], int locsNUMm, int id);

void DisplayAll(struct emp arr[], int locsNUMm);
void DeleteById(struct emp arr[], int locsNUMm);
void DeleteByName(struct emp arr[], int locsNUMm);



 void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }


void textattr(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}


int main()
{
    struct emp arr[locsNUM];
    int ll;
     for(ll=0;ll<10;ll++)
    {
        arr[ll].id=0;

    }

    /*
    int locsNUM;
    printf("enter the number of employees: ");
    scanf("%d", &locsNUM);
    arr = (struct emp*) malloc(size*sizeof(struct emp));
    */
    char menu[10][20]={"NEW","DISPLAY","Delete By id ","Delete By Name ","EXIT"};
    int i=0;
    int cursor=0;
    char ch ;
    int flag=0;
   do{
            system("cls");
    for(i=0;i<5;i++)
    {
        gotoxy(10,5+i);
        if (i==cursor)
            textattr(0x27);
        printf("%s",menu[i]);
        textattr(0x07);
    }


    ch=getch();
    switch (ch)
    {

        case -32: //exnum
         ch=getch();
         switch (ch)
         {
           case 72 : //up
              cursor--;
              if (cursor<0)
                    cursor=4;
        break;


        case 80://down

            cursor++;
              if (cursor>4)
                cursor=0;
          break;


          case 71://home
              cursor=0;
        break;


         case 79://end
            cursor=4;
          break;
   }
          break;


        case 27: //escape
          flag=1;
          break;


        case 13: // enter

            system("cls");

            switch(cursor)
            {
                case  4: //exit
               flag = 1;
                break;

            case 0: //new
               newEMP(arr);
                getch();
                break;

            case 1:  //display
                DisplayAll(arr, locsNUM);
                getch();
                break;

            case 2:  //DeleteById
                DeleteById(arr, locsNUM);
                getch();
                break;

            case 3:    //DeleteByName
                DeleteByName(arr, locsNUM);
                getch();
                break;


            }
            break;
    }

    }
    while(flag==0);

    return 0;
}






void newEMP(struct emp arr[]){
int location;
int chloc;


printf("\n there are 10 locations enter the num where you want put new emp? ");
scanf("%d",&location); // 1

location = location-1; //0
                 //id =5       0
int check;
do{
check=checkIdloc(arr[location].id , location); //id =5  0
location=check;
}while(locIdFlage==1);




if (locIdFlage==0)
{
printf("\n-------------------data of emp no %d---------------",location+1);
takeEmpdata(arr,location); //0
}


if (locIdFlage==2)
{
printf("\n-------------------data of emp no %d---------------",location+1);
takeEmpdata(arr,location); //0
}
}

                //5        [0]
int checkIdloc (int id ,int location  )
{
if (location>locsNUM || location<0 )
     {
         printf("invalid location choose another place : ");

         scanf("%d",&location);
         location = location-1;
         locIdFlage=1;
     }

else{


    if(id!=0)  //5
    {

     printf(" This place is not available \n to choose another place enter 0 ...to update data enter 1 ");
     int userchoice;
     scanf("%d",&userchoice);
     switch (userchoice)
     {
     case 0:
     printf("\nchoose another place :  ");
     scanf("%d",&location);
     location = location-1;
     locIdFlage=1;
       break;

     case 1:

        locIdFlage=0;
       break;

     default:
         //locIdFlage=1;
         printf("\nI can not understand try again");
         //scanf("%d",&userchoice);
     }
    }
    else
        locIdFlage=2;
}
    return location;
}





void takeEmpdata(struct emp arr[],int location) //0
{    int empid;
     printf("\nplz enter id : ");
     scanf("%d",&empid); //5 in [0]
     int id;
    do{
     id=checkIdsBefor(arr,locsNUM , empid);
     arr[location].id=id;
     }while ( bfIdFlage==1);


     printf("\nplz enter name : ");
     scanf("%s",arr[location].name);

    printf("\nplz enter age : ");
    scanf("%d",&arr[location].age);

     printf("\nplz enter salary : ");
    scanf("%d",&arr[location].salary);


     printf("\nplz enter deduction : ");
    scanf("%d",&arr[location].deduction);

     printf("\nplz enter over time : ");
    scanf("%d",&arr[location].overtime);
    //printf("\nThe employee has been registered...Click Enter to return to the main menu");

}


                 //arr              10
int checkIdsBefor(struct emp arr[], int locsNUMm, int id)
{
    int i;
    for ( i = 0; i <locsNUMm; i++)
    {
        if (arr[i].id == id)
        {   int nid;
            printf("please enter a correct id. This id is already taken.\n");
            scanf("%d",&nid);
            id=nid;
            bfIdFlage=1;
        }
        else
            bfIdFlage=0;
    }
    return id;

}




void DisplayAll(struct emp arr[], int locsNUMm){
    int i;
    for (i=0; i<locsNUMm; i++){
        if (arr[i].id != 0){
            printf("id: %d name: %s age: %d  salary: %d  deduction: %d  overtime %d \n", arr[i].id, arr[i].name, arr[i].age,arr[i].salary ,arr[i].deduction,arr[i].overtime );
        }
        else
            continue;
    }
}

void DeleteById(struct emp arr[], int locsNUMm){
    int i;
    int id;
    printf("enter the id of employee that you want to delete: ");
    scanf("%d", &id);

    for (i=0; i<locsNUMm; i++){
        if (arr[i].id == id)
            arr[i].id = 0;

    }
    printf("done");
}

void DeleteByName(struct emp arr[], int locsNUMm){
    int i;
    char name[15];
    printf("enter the name of employee that you want to delete: ");
    scanf("%s", name);

    for (i=0; i<locsNUMm; i++)
   {
        if (!strcmp(arr[i].name, name))
            {arr[i].id = 0;}

    }
     printf("done");
}



