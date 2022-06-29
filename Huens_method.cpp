#include<bits/stdc++.h>
using namespace std;
double f(double x0,double y0)
{
    return ((2*y0)/x0);
}
int main()
{
    cout<<fixed<<setprecision(6);
    cout<<"Huens Method : eqution :y'(x)=2y/x"<<endl;
    double x0,y0,h,xn,yn,m1;
    cout<<"X0 : ";
    cin>>x0;
    cout<<endl<<"Y0 : ";
    cin>>y0;
    cout<<endl<<"h : ";
    cin>>h;
    cout<<endl<<"xn : ";
    cin>>xn;
    while(x0<xn)
    {
       yn=y0+(h/2)*(f(x0,y0)+f(x0+h,y0+h*f(x0,y0)));
       x0=x0+h;
       y0=yn;
       cout<<"x0 : "<<x0<<", y0 : "<<y0<<endl;
    }
    cout<<"xn : "<<xn<<", "<<" yn : "<<yn<<endl;
}
