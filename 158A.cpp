//Next Round - 158A
#include <iostream>
 
using namespace std;
 
int main()
{
    int n, k,ans=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    //check
    if(a[k-1]>0) {
        int i=k;
        ans=k;
        while(a[i]>=a[k-1]&&i<n) {
            ans++;
            i++;
        }
    }
    else if(a[k-1]==0) {
        ans=0;
        for(int i=0;i<k-1;i++) {
            if(a[i]>0) {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
