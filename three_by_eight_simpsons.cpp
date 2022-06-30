#include<bits/stdc++.h>
using namespace std;
//f(x,y) = x^3+1
double a,b,n,h;
void readInput(){
    cout<<"value of a: ";cin>>a;
    cout<<"Value of b: ";cin>>b;
    //cout<<"value of n: ";cin>>n;
}
double f(double x){
    return x*x*x+1;
}
int main(){
    cout<<fixed<<setprecision(6);
    readInput();

    h = (b-a)/3;

    double x1 = a+h;
    double x2 = a+2*h;
    
    double ans = (3*h/8.0)*(f(a)+3.0*f(x1)+3.0*f(x2)+f(b));
    cout<<ans<<endl;
}
