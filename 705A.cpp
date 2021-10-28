//Hulk - 705A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a="I hate ";
    string b="that I love ";
    string c="it";
    string d="that I hate ";
    string e;
        e=a;
        if(n==1) {
        e=e+c;
        }
    else{
    for(int i=1;i<=(n-1)/2;i++)
    e=e+b+d;
    if((n-1)%2==1)
    e=e+b;
    e=e+c;
    }
    cout<<e;
   return 0;
}
