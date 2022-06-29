#include<bits/stdc++.h>
using namespace std;
double f(double x0,double y0)
{
     double x=(3*(x0*x0))+1;
     return x;
}
int main()
{
    cout<<"d_y/d_x=3x^2+1"<<endl;
    double x0,y0,h,n,yn;
    cout<<"X0 : ";
    cin>>x0;
    cout<<endl<<"Y0 : ";
    cin>>y0;
    cout<<endl<<"h : ";
    cin>>h;
    cout<<endl<<"Step size f(n) : ";
    cin>>n;
    double slope;
    while(x0<n)
    {
        slope=f(x0,y0);
        yn=y0+h*slope;
        cout<<"x0 :"<<x0<<" y0 :"<<y0<<" slope :"<<slope<<" yn :"<<yn<<endl;
        y0=yn;
        x0=x0+h;
    }

    
}
