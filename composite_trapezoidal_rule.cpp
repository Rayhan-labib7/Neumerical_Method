#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return (x);
}
int main()
{
    cout<<"Trapezoidal_rule : f(x)=x"<<endl;
    double lower,upper,h,n,k;
    cin>>lower>>upper>>n;
    h=(upper-lower)/n;
    double integration=f(lower)+f(upper);
    for(int i=1;i<n;i++)
    {
     k=lower+i*h;
     integration+=2*f(k);
    }
    cout<<integration*(h/2)<<endl;

}
