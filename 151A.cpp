//151A - Soft Drinking
#include<iostream>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
        int x,y,z;
        x=(k*l)/nl;
        y=c*d;
        z=p/np;
        int ans=min(min(x,y),z)/n;
        cout<<ans;
    return 0;
}
