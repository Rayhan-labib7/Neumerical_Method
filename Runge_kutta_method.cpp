#include<bits/stdc++.h>
using namespace std;
double f(double x0,double y0)
{
    return (x0*x0+y0*y0);
}
int main()
{
    cout<<"Runge_kutta_method :"<<endl;
    cout<<"y'(x)=x^2+y^2"<<endl;
    double x0,y0,h,n,yn,m1,m2,m3,m4;
    cout<<"X0 : ";
    cin>>x0;
    cout<<endl<<"Y0 : ";
    cin>>y0;
    cout<<endl<<"h : ";
    cin>>h;
    cout<<endl<<"f(n) : ";
    cin>>n;
    while(x0<n)
    {
        m1=f(x0,y0);
        m2=f(x0+(h/2),y0+(m1*h)/2);
        m3=f(x0+(h/2),y0+(m2*h)/2);
        m4=f(x0+h,y0+m3*h);
        yn=y0+(((m1+m2+m3+m4)/6)*h);
        cout<<x0<<" "<<y0<<" "<<yn<<endl;
        x0=x0+h;
        y0=yn;
    }


}
