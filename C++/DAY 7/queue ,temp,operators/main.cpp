#include <iostream>

using namespace std;
template <class h>

class Queue
{
    int rear;
    int front;
    int size ;
    h* arr;

public:
//-------------------------------constructors---------------------------
    Queue()
    {
        front = rear = -1;
        size = 5;
        arr = new int[size];
    }

    Queue(int _size)
    {
        front =rear =-1;
        size=_size;
        arr=new int[size];
    }

     ~Queue ()
    {
      delete [] arr;
    }

    Queue(Queue const & q)
    {
        front=q.front;
        rear=q.rear;
        size=q.size;
        arr=new h[size];
        for(int i=0;i<size;i++)
            {
                arr[i]=q.arr[i];
            }
    }
//-------------------------------functions--------------------------------

    int isFull ()
    {
        if(front==0&&rear==size-1)
        {
            return 1;
        }
        else if (rear== front-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int isEmpty()
    {
        if (front==-1&& rear==-1)
            return 1;
        else
            return 0;
    }

    void enqueue(h value )
    {
        if(isFull())
        {
            cout<<"Queue is full cannot enqueue"<<endl;
        }

        else
        {
           if (isEmpty())
           {
             front=rear=0;
             arr[rear]=value;
           }
           else if (rear==size-1)
           {
               rear=0;
               arr[rear]=value;
           }
           else
           {
             rear++;
            arr[rear] = value;
           }
        }
    }

void deQueue()
{
    if(isEmpty())
    {
        cout<<"queue is empty cannot dequeue "<<endl;
    }else
    {
      if(front==rear)
      {
         front=rear=-1;
      }
      else if (front==size-1)
      {
          front =0;
      }
      else
      {
        front++;
      }
    }
}

h peek ()
{
    if (isEmpty())
   cout<<"queue is empty cannot dequeue "<<endl;
    else
    {
        return arr[front];
    }
}
void viewcontent()
{
    if (isEmpty())
    {
     cout<<"queue is empty cannot dequeue "<<endl;
    }
    else
    {
        if (front <= rear)
        {
            cout <<"the content "<< endl;
            for (int i=front;i<=rear;i++)
            {
                cout << arr[i]<< endl;
            }
        }
        else
        {
             cout <<"the content "<< endl;
             for (int i=front;i<=size;i++)
            {
                cout << arr[i]<< endl;
            }
            for (int i=0;i<=rear;i++)
            {
                cout << arr[i]<< endl;
            }
        }
    }
}
//---------------------------------operators------------------------------
 Queue& operator=(Queue const & q)
    {
            rear=q.rear;
            front=q.front;
            size=q.size;
            delete arr[];
            arr=new h[size];
            for(int i=0;i<rear;i++)
            {
                arr[i]=q.arr[i];
            }
            return *this;
    }

};

int main()
{
    Queue<int> q1(3);
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.viewcontent();

    q1.enqueue(40);

    q1.deQueue();
    q1.viewcontent();
    cout <<"peek>> " <<q1.peek();
    q1.enqueue(40);

    return 0;
}

