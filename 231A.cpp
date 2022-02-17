//Team - 231A
#include <iostream>
 
using namespace std;
 
int main()
{
   int n,ans=0;
   cin>>n;
   for(int i=0;i<n;i++) {
       int p,v,t,sum;
       cin>>p>>v>>t;
       sum=p+v+t;
       if(sum>=2&&sum<=3) {
           ans++;
       }
   }
   cout<<ans;
   return 0;
}
