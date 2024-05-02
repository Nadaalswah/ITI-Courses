#include <iostream>
#include <string.h>
using namespace std;
class bankAccount
{
    int id;
    int balance;
    char name[30];
    public:

    //set
    void setid (int idd)
    {
      id=idd;
    }

       void setbalance (int blanc)
    {
        balance=blanc;
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
     int getbalance ()
    {
        return balance ;
    }
     char* getname ()
    {
        return name ;
    }

    int Deposit(int depositt)
    { if (depositt<= 1000000)
     {
      balance=balance+depositt;
      cout<< "deposit= "<<depositt <<endl;
      cout<< "balance after deposit="<< balance <<endl ;
     }
     return balance;
    }


    int withdraw(int withdraw)
    {
        if (withdraw<= balance)
            {balance=balance-withdraw;
            cout<< "sahp= "<<withdraw <<endl;
             cout<< "balance after withdraw= "<< balance<<endl;
            }
        return balance;
    }
      void print ()
    {
        cout<< "id="<<id << "\tname=" <<name << endl;
    }
};
int main()
{
    bankAccount bak1;
    bak1.setid(10);
    bak1.setname("nada");
    bak1.print();
    bak1.setbalance(100000);
    bak1.Deposit(5000);
    bak1.withdraw(14000);
cout<<"888888888888888888888888888888888888"<<endl;
    bankAccount b2;
    b2.setid(20);
    b2.setname("noon");
    b2.print();
    b2.setbalance(40000);
        b2.Deposit(10000);
        b2.withdraw(1000);
    return 0;
}
