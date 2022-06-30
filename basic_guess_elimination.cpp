#include<bits/stdc++.h>
using namespace std;
double a[4],b[4],c[4],d[4];
double x,y,z;
void readInput(){
    cout<<"Enter value of :"<<endl;
    for(int i=1; i<=3; i++){
        cout<<"a"<<i<<": ";cin>>a[i];
        cout<<"b"<<i<<"; ";cin>>b[i];
        cout<<"c"<<i<<"; ";cin>>c[i];
        cout<<"c"<<i<<"; ";cin>>d[i];
    }
}
void forward_elimination(){

    /*for(int i=1; i<=3; i++){
        cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<" "<<d[i]<<endl;
    }
    cout<<endl<<endl;
    */
    
    b[2]=(b[1]*a[2]-a[1]*b[2]);
    c[2]=(c[1]*a[2]-a[1]*c[2]);
    d[2]=(d[1]*a[2]-a[1]*d[2]);
    a[2]=0;

    
    b[3]=b[1]*a[3]-a[1]*b[3];
    c[3]=c[1]*a[3]-a[1]*c[3];
    d[3]=d[1]*a[3]-a[1]*d[3];
    a[3]=0;
    
    c[3]=b[3]*c[2]-b[2]*c[3];
    d[3]=b[3]*d[2]-b[2]*d[3];
    b[3]=0;
}
void backward_elimination(){
    z = d[3]/c[3];
    y = (d[2]-c[2]*z)/b[2];
    x = (d[1]-b[1]*y-c[1]*z)/a[1];
}
int main(){
    readInput();
    forward_elimination();
    backward_elimination();
    cout<<fixed<<setprecision(6);
    cout<<"X : "<<x<<endl<<"Y : "<<y<<endl<<"Z : "<<z<<endl;
}

/*
3
2
1
10

2
3
2
14

1
2
3
14
*/
