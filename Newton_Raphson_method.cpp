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
    double xn_1;
    double ans;
    int step=0;
    while(1)
    {
        xn_1=x;
        x=x-((f_x(x))/(f_x1(x)));
        if(xn_1==x)
        {
            ans=x;
            break;
        }
        step++;
    }
    cout<<"Root "<<ans<<" Step "<<step<<endl;

}
