#include <iostream>

using namespace std;
class Stack
{
    int size;
    int tops;
    int* arr;

public:
//---------------------------sets--------------------------
    void setSize(int _size)
    {
        size=_size;
    }
    void setTops (int _tops)
    {
        tops=_tops;
    }

//---------------------------gets--------------------------
      int getSize ()
    {
        return size;
    }
    int getTops ()
    {
        return tops;
    }


//------------------------constructors---------------------
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

//--------------------------behaviors----------------------
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
//----------------------operators-------------------------------

    Stack& operator=(Stack const& s)
    {
        tops=s.tops;
        size=s.size;
        delete[] arr;
        arr = new int[size];
        for(int i=0; i<tops; i++)
        {
            arr[i]=s.arr[i];
        }
        return *this;      //by reference
    }


    Stack operator+(Stack const& s)        //by reference
    {
        Stack adds(size+s.size);
        for(int i=0;i<tops;i++)
            adds.push(arr[i]);    //this >>s1

        for(int i=0;i<s.tops;i++)
            adds.push(s.arr[i]);  // >>s2

        return adds;       //by value
    }




};



//void viewContent(Stack s);
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

    Stack s2(3) ;
    s2.push(10);
    s2.push(20);
    Stack s1;
    s1=s2;
    s1.push(30);
    viewContent(s2) ;
    cout << endl<< "**************************************";
    viewContent(s1) ;
    cout << endl<< "**************************************";
    Stack s3;
    s3=s1+s2;
    viewContent(s3) ;


    return 0;
}
