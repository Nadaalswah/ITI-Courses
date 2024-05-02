#include <iostream>

using namespace std;
class Stack
{
    int size;
    int tops;
    int* arr;             //dynamic stack

public:
    void setSize(int _size)
    {
        size=_size;
    }
    int getSize ()
    {
        return size;
    }
    Stack()
    {
        tops=0;
        size = 5;
        arr=new int [size];
    }

    Stack(int _size)
    {
        tops=0;
        size = _size;
        arr=new int [size];
    }

   //copy constructor
    Stack (Stack const & s)
    {
        tops=s.tops;
        size=s.size;
        arr=new int [size];
        for (int i=0;i<tops ;i++)
        {
            arr[i]=s.arr[i];
        }
    }

    ~Stack ()
    {
      delete [] arr;
    }

    int isFull ()
    {
        if(tops==size)
            return 1;
        else
            return 0;
    }

    int isEmpty ()
    {
        if (tops==0)
            return 1;
        else
            return 0;
    }

    int push (int nn)
    {
        if (isFull() == 1){
            cout<< "full"<< endl ;
            return 0;
        }
        else
        {
           arr[tops]=nn;
           tops++;
           return 1;
        }
    }

    int pop (int *n)
    {
        if (isEmpty()==1)
        {
            cout <<endl<< "empty";
            return 0;
        }
           tops --;
           *n=arr[tops];
           return 1;
    }



};

void viewContent(Stack s);
void viewContent(Stack s)
{
 cout << endl << "the content ";
 while(!s.isEmpty())
 {
    int x;
    if (s.pop(&x))
       cout <<endl<< x;
 }

}


/*
void viewContent(Stack &s);
void viewContent(Stack &s)
{
 cout << endl << "the content ";
 while(!s.isEmpty())
 {
    int x;
    if (s.pop(&x))
       cout <<endl<< x;
 }

}
*/
/*

void viewContent(Stack* s);
void viewContent(Stack* s)
{
 cout << endl << "the content ";
 while(!s->isEmpty())
 {
    int x;
    if (s->pop(&x))
        cout <<endl<< x;
 }

}
*/

int main()
{
    /*Stack s1 ;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    //s.push(60);
*/
    Stack s2(5) ;
    s2.push(10);
    s2.push(20);
    //s2.push(30);
 Stack s3(s2);
 Stack s4=s2;
 s2.push(30);
 s2.push(40);
  // viewContent(s2) ;
   cout<<"*****************************************";

   viewContent(s3) ;
  // Stack* sp=&s3;

   viewContent(s4) ;
    //viewContent(sp) ;

    return 0;
}
