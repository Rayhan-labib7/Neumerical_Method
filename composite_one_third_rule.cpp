#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return (1/(1+x*x));
}
int main()
{
    double lower,upper,n,h,k;
    cin>>lower>>upper>>n;
    h=(upper-lower)/n;
    double intregation=f(lower)+f(upper);
    for(int i=1;i<n;i++)
    {
       k=lower+i*h;
       if(i%2==0)
       {
         intregation+=2*f(k);
       }
       else
       {
        intregation+=4*f(k);
       }
    }
    cout<<intregation*(h/3)<<endl;

}
