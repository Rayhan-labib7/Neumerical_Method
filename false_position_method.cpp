#include<bits/stdc++.h>
using namespace std;
const double e = 10e-8;
double fx_1(double x1)
{
    return (x1*x1-x1-2);
}
double fx_2(double x2)
{
    return (x2*x2-x2-2);
}
double fx_0(double x0)
{
    return (x0*x0-x0-2);
}
int main()
{
    cout<<"Fasle position method :"<<endl;
    cout<<"Eqution : x^2-x-2=0"<<endl;
    double x1,x2,x0,f0;
    cout<<"x1 :";
    cin>>x1;
    cout<<endl<<"x2 :";
    cin>>x2;
    double f1=fx_1(x1);
    double f2=fx_2(x2);
    if(f1*f2>=0)
    {
        cout<<"x1 and x1 do not bracket of root"<<endl;
        return 0;
    }
    double pre_x0=100000;
    while(1)
    {
        f1=fx_1(x1);
        f2=fx_2(x2);  
        x0=(x1-((f1*(x2-x1))/(f2-f1)));
        f0=fx_0(x0);
        if(abs(x0-pre_x0)<e)
        {
            cout<<"Root  : "<<x0<<endl;
            break;
        }
         pre_x0=x0;
        if(f0*f1<0)
        {
            x2=x0;
        }
        else
        {
            x1=x0;
        }
        

    }
}
