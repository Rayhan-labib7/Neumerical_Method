#include<bits/stdc++.h>
using namespace std;
double f_1(double x1)
{
    return (x1*x1+x1-2);
}
double f_2(double x2)
{
    return (x2*x2+x2-2);
}
double fx_0(double x0)
{
    return (x0*x0+x0-2);
}
int main()
{
    cout<<"Eqution : x^2+x-2=0"<<endl;
    double x1,x2,x0,f0,e;
    cout<<"Accuracey : ";
    cin>>e;
    cout<<"X1 : ";
    cin>>x1;
    cout<<endl<<"x2 : ";
    cin>>x2;
    double f1=f_1(x1);
    double f2=f_2(x2);
    if(f1*f2>=0)
    {
        cout<<"x1 and x2 do not bracket the root"<<endl;
        return 0;
    }
    while(1)
    {
    x0=(x1+x2)/2;
    f1=f_1(x1);
    f0=fx_0(x0);
    if(abs((x2-x1)/x2)<e)
    {
        double root=(x1+x2)/2;
    
        cout<<"Root "<<root<<" error "<<abs((x2-x1)/x2)<<endl;
        break;
    }

    if(f1*f0<0)
    {
        x2=x0;
    }
    else
    {
        x1=x0;
        f1=f0;
    }
    
    }





}
