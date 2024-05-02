#include <iostream>

using namespace std;
struct emp
{
    int id;
    int salary;
    char name[10];
    public:
    void print ()
    {
        cout<< "id="<<id << "\tname=" <<name << "\tsalary="<< salary << endl;
    }
};

int main()
{
   emp e1 ={10, 40000,"nada"};
   e1.print();
    return 0;
}
