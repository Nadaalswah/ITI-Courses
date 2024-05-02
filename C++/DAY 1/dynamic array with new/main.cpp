#include <iostream>
#define siz 5
using namespace std;

int main()
{
    int* arr=new int[siz];
    int i;
    for (i=0;i<siz;i++ )
    {
        cout << "enter num:" << i+1 <<"  ";
        cin>>arr[i];
    }
     for (i=0;i<siz;i++ )
    {
        cout <<arr[i] <<"\t";
    }

    delete []arr;

      for (i=0;i<siz;i++ )
    {
        cout <<arr[i] <<"\t";
    }

    return 0;
}
