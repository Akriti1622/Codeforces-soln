//Presents - 136A
#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int p[n];
   for(int i=0;i<n;i++) {
       cin>>p[i];
   }
   int q[n];
   for(int i=0;i<n;i++) {
       q[i]=0;
   }
   for(int i=0;i<n;i++) {
       q[p[i]-1]=i+1;
   }
   for(int i=0;i<n;i++) {
       cout<<q[i]<<" ";
   }
   return 0;
}
