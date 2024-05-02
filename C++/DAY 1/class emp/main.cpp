#include <iostream>
#include <string.h>
using namespace std;
class emp
{
    int id;
    int salary;
    char name[10];
    public:
    void print ()
    {
        cout<< "id="<<id << "\tname=" <<name << "\tsalary="<< salary << endl;
    }
    //set
    void setid (int idd)
    {
        if(idd>0 && idd<=100)
        id=idd;
    }

     void setsal (int sal)
    {
        salary=sal;
    }
     void setname (char* nam)
    {
        strcpy (name,nam);
    }
    //get
    int getid ()
    {
        return id ;
    }
     int getsalary ()
    {
        return salary ;
    }
     char* getname ()
    {
        return name ;
    }
    //
};

int main()
{
     emp e1 ;
     e1.setid(20);
     //cout<<"id=" <<e1.getid() <<"\t";


     e1.setname("nada");
      //cout<< "name=" <<e1.getname()<<"\t";

     e1.setsal(4000);
      //cout<<"salary=" <<e1.getsalary();

     e1.print();

    return 0;
}
