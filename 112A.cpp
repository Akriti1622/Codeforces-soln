//112A - Petya and Strings
#include <iostream>
 
using namespace std;
 
int main()
{
    string a,b;;
    cin>>a>>b;
    int n;
    n=a.length();
    int ans;
    for(int i=0;i<n;i++) {
        if(a[i]==b[i]||a[i]==b[i]+32||a[i]==b[i]-32) {
            ans=0;
        }
        else if(a[i]<b[i]||a[i]<b[i]+32||a[i]<b[i]-32) {
            ans=-1;
        }
        else if(a[i]>b[i]||a[i]>b[i]+32||a[i]>b[i]-32) {
            ans=1;
        }
    }
    cout<<ans;
   return 0;
}
