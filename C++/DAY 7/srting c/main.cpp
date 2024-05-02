#include <iostream>
#include <string.h>

using namespace std;
class String
{
    char* str;

public:
    String()
    {
        str=new char[1];
        str[0]='\0';

    }
    String(char* word)
    {
        str=new char[strlen(word)+1];
        strcpy(str,word);


    }
    String(const String& s)
    {
        str = new char[strlen(s.str) + 1] ;
        strcpy(str,s.str);
        str[strlen(s.str)]='\0';
    }


    String operator+(String s)
    {

        String res;
        res.str=new char[strlen(s.str)+strlen(str)+1];
        strcpy(res.str,str);
        strcat(res.str," ");
        strcat(res.str,s.str);
        str[strlen(s.str)+strlen(str)]='\0';
        return res;

    }
    String operator=(String s)
    {
        str=new char[strlen(s.str)+1];
        strcpy(str,s.str);
        str[strlen(s.str)]='/0';

    }
    void print()
    {
        cout<<str<< endl;
    }

    int compare(String s)
    {
        int len;
        if(strlen(s.str)>strlen(str))
            len=strlen(s.str);
        else
            len=strlen(str);


        for(int i=0; i<len; i++)
        {
            if(s.str[i]==str[i])
            {
                cout<<"same" <<endl;
                return 1;
            }
            else
            {
                cout<<"different" << endl;
                return 0;
            }
        }
    }
};

int main()
{

    String s1("hello");
    s1.print();

    String s2("world");
    s2.print();

    String s3=s1+s2;
    s3.print();

    String s4=s2;
    s4.print();

    s4.compare(s2);
    s4.compare(s1);

    return 0;
}
