#include <iostream>

using namespace std;
class Stack
{
    int arr[5];
    int size;
    int tops;

public:
    Stack()
    {
        tops=0;
        size = 5;
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
            cout<< "full";
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




int main()
{
    Stack s1 ;
    s1.push(10);
    s1.push(20);

    s1.push(30);
s1.push(40);
s1.push(50);



/*
    int x;

    if (s.pop(&x))
    cout <<endl<< x;

     if (s.pop(&x))
    cout <<endl<< x;

     if (s.pop(&x))
    cout <<endl<< x;

     if (s.pop(&x))
    cout <<endl<< x;

     if (s.pop(&x))
    cout <<endl<< x;

    if (s.pop(&x));
    cout <<endl<< x;

*/

   viewContent(s1) ;
   int x;
   s1.pop(&x);
   Stack s2=s1;


   viewContent(s1);
    viewContent(s2) ;


    return 0;
}
