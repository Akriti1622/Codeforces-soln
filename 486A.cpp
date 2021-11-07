//486A - Calculating function
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int64_t n;
   cin>>n;
   int64_t ans;
   if(n%2==0) {
       ans=n/2;
   }
   else if(n%2==1) {
   ans=-(n+1)/2;
   }
   cout<<ans;
                 return 0;
               }
