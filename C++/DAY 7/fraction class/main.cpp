#include <iostream>
#include <algorithm>

using namespace std;
class fraction
{
    int num;
    int denum;
public:
//----------------------------------sets------------------------------------
    void setNum(int _num)
    {
        num=_num;
    }
    void setDenum(int _denum)
    {
        denum =_denum;
    }
    void setNumber(int _num,int _denum)
    {
        num=_num;
        denum =_denum;
    }
//----------------------------------------gets---------------------------------
    int getNum()
    {
        return num;
    }
    int getDenum()
    {
        return denum;
    }
    int getNumber()
    {
        return num/denum;
    }
//--------------------------constructors----------------------
    fraction()
    {
        num=0 , dum=1;
    }
    fraction(int _num)
    {
        num =_num;
        denum =1;
    }
    fraction(int _num,int _denum)
    {
        num=_num;
        denum =_denum;
    }
    /*fraction(const fraction& f)
    {
        num=f.num;
        denum=f.denum;
    */
//------------------------------------operators---------------------
    fraction operator+(fraction f)
    {
        fraction res;
        res.setDenum(f.getDenum()*denum);
        res.setNum(res.getDenum()/f.getNum()+res.getDenum()/denum);
        return res;

    }
    fraction operator-(fraction f)
    {
        fraction res;
        res.setDenum(f.getNum()*denum);
        res.setNum(res.getDenum()/f.getNum()-res.getDenum()/denum);
        return res;
    }

     void print()
    {
        cout << "\n" <<num<<"/"<<denum;
    }


};
/*void simplify(fraction f)
{
    fraction res;
    int gcd=__gcd(f.getNum(),f.getDenum());
    if(gcd>1)
    {
        res.setNum(f.getNum()/gcd);
        res.setDenum(f.getDenum()/gcd);

        cout<<"the simplified number is "<<res.getNum()<<"/"<<res.getDenum();
    }
    else if(gcd==1)
        cout<<"the fraction is on its simplest form";


}
*/

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void simplify(fraction f)
{
    fraction res;
    int GCD=gcd(f.getNum(),f.getDenum());
    if(GCD>1)
    {
        res.setNum(f.getNum()/GCD);
        res.setDenum(f.getDenum()/GCD);

        cout<<"simplified is "<<res.getNum()<<"/"<<res.getDenum();
    }
    else if(GCD==1)
        cout<<" it in simplest form ";


}







int main()
{
    fraction f;
    f.print();

    fraction f1(3);
    f1.print();

    fraction f2(6,4);
    f2.print();
    simplify(f2);


    fraction f3;
    f3=f1+f2;
    f3.print();
    simplify(f3);

    fraction f4;
    f4=f2-f1;
    f4.print();
    simplify(f4);


    fraction f5(f2);
    f5.print();

    return 0;
}
