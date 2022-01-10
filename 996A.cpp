//996A - Hit the Lottery
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0;
    if(n/100!=0) {
        a=n/100;
        //cout<<a<<endl;
        n=n%100;
    }
    int b=0;
    if(n/20!=0) {
        b=n/20;
        //cout<<b<<endl;
        n=n%20;
    }
    int c=0;
    if(n/10!=0) {
        c=n/10;
        n=n%10;
    }
    int d=0;
    if(n/5!=0) {
        d=n/5;
        //cout<<d<<endl;
        n=n%5;
    }
    int e=0;
    if(n/1!=0) {
        e=n/1;
    }
    int sum;
    sum=a+b+c+d+e;
    cout<<sum;
   return 0;
}
