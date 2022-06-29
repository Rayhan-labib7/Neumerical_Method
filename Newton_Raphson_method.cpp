#include<bits/stdc++.h>
using namespace std;
double f_x(double x)
{
    return (x*x*x-2*x-5);
}
double f_x1(double x)
{
    return (3*(x*x)-2);
}
int main()
{

    cout<<"Newtom Raphson Method : x^3-2x-5 "<<endl;
    double x;
    cin>>x;
    for(int i=0;i<10;i++)
    {
        x=x-((f_x(x))/(f_x1(x)));
        cout<<x<<endl;
    }

}
