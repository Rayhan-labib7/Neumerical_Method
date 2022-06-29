#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return (x*x*x+1);
}
int main()
{
    cout<<"Trapezoidal_rule : f(x)=x^3+1"<<endl;
    double lower,upper,h;
    cin>>lower>>upper;
    h=(upper-lower);
    double integration=(f(lower)+f(upper))*(h/2.0);
    cout<<integration<<endl;

}
