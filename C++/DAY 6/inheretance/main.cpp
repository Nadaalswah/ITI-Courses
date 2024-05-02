#include <iostream>
#include <string.h>
using namespace std;
class person
{
protected:
    int id;
    char name [10];
    int age;
public:
    void setId(int _id)
    {
        id=_id;
    }
    void setName (char* _name)
    {
        strcpy(name, _name);
    }
    void setAge (int _age)
    {
        age=_age;
    }
    int getId()
    {
        return id;
    }
     int getAge()
    {
        return age;
    }
    char* getName ()
    {
        return name;
    }
    person()
    {
        id=0;
        strcpy(name,"no name");
        age=6;
    }
    person (int _id , char* _name ,int _age)
    {
        id=_id;
        strcpy(name,_name) ;
        age=_age;
    }

     person (int _id , char* _name )
    {
        id=_id;
      strcpy(name,_name) ;

    }

    void print()
    {
        cout <<endl << id <<":"<< name <<":"<<  age ;
    }


};
class student : public person
{
    char grade ;

public:
    void setGrade (char _grade)
    {
        grade=_grade;
    }
    char getGrade ()
    {
        return grade;
    }

   student(){}
    student(int _id , char* _name ) :person(_id, _name )
        {
            age=6;
            grade = 'a';
        }
    student(int _id , char* _name , int _age) :person(_id, _name ,_age)
        {
            if(_age>6)
                age=_age;
            else
                cout<<"invalid age for a student";
            grade = 'a';
        }

     student(int _id , char* _name ,int _age,int _grade):person(_id,_name,_age)
       { grade = _grade;}

     void print()
    {
        person :: print();
        cout << ":"<<grade ;
    }


};

class emp :public person
{
    int salary ;
public :
    void setSalary (int _salary)
    {
        salary=_salary;
    }
    int getSalary ()
    {
        return salary;
    }

    emp(){}
    emp (int _id , char* _name ,int _age):person(_id,_name,_age)
    {
        if(_age>30)
                age=_age;
            else
                cout<<"invalid age for a emp";

        salary = 6000;
    }

    emp (int _id , char* _name):person(_id,_name)
    {
       age=30;
       salary = 6000;
    }

    emp (int _id , char* _name ,int _age,int _salary):person(_id,_name,_age)
    { salary = _salary;}


     void print()
    {
        person :: print();
        cout <<":"<< salary ;
    }

};

int main()
{
    person p (10,"nada ",22);
    p.print();


    student s1 (20,"aly");
    student s2 (30,"mona",9);
    student s3 (40,"non", 10, 'b');
    s1.print();
    s2.print();
    s3.print();

    emp e1 (20,"mohamed");
    emp e2 (70,"noor",33);
    emp e3 (90,"zainab",43,1000);
    e1.print();
    e2.print();
    e3.print();


    return 0;
}
