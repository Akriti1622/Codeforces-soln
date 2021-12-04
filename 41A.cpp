//Translation - 41A
#include <iostream>
 
using namespace std;
 
int main()
{
   string s,t;
   cin>>s>>t;
   int n;
   n=s.length();
   int i;
   for(i=0;i<n;i++) {
       if(s[i]!=t[n-1-i]) {
           cout<<"NO";
           break;
       }
   }
   if(i==n) {
       cout<<"YES";
   }
   return 0;
}
