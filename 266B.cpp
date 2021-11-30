
//Queue at the school - 266B
#include <iostream>
using namespace std;
int main()
{
   int n,t;
   cin>>n>>t;
   string a;
   cin>>a;
   while(t>0) {
   for(int i=0;i<n-1;i++) {
       if(a[i]=='B'&&a[i+1]=='G') {
           swap(a[i],a[i+1]);
           i++;
       }
   }
   t--;
   }
   cout<<a;
   return 0;
}
