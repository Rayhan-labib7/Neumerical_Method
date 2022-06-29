#include<bits/stdc++.h>
using namespace std;
const double e = 10e-8;
double fx_1(double x1)
{
    return (x1*x1-4*x1-10);
}
double fx_2(double x2)
{
    return (x2*x2-4*x2-10);
}
double fx_3(double x3)
{
    return (x3*x3-4*x3-10);
}
int main()
{
    cout<<"Secent_method : eqution : x^2-4x-10=0 :"<<endl;
    double x1,x2,x3,f1,f2,f3;
    cout<<"initial two value  :"<<endl;
    cout<<"X1 : ";
    cin>>x1;
    cout<<endl<<"X2 : ";
    cin>>x2;
    f1=fx_1(x1);
    f2=fx_2(x2);
    while(1)
    {
        f1=fx_1(x1);
        f2=fx_2(x2);
        x3=((f2*x1)-(f1*x2))/(f2-f1);
        f3=fx_3(x3);
        if(abs((x3-x2)/x3)<e)
        {
            cout<<"Root "<<x3<<endl;
            break;
        }
        else
        {
            x1=x2;
            f1=f2;
            x2=x3;
            f2=f3;
        }
    }


}
