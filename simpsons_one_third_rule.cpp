#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return exp(x);
}
int main()
{
    double lower,upper,n=2,h;
    cin>>lower>>upper;
    h=(upper-lower)/n;
    double intregation=(h/3)*(f(lower)+f(upper)+4*f(lower+h));
    cout<<intregation<<endl;

}
