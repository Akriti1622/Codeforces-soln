//Vanya and Fence - 677A
#include <iostream>
 
using namespace std;
 
int main()
{
   int n,h;
   cin>>n>>h;
   int a[n];
   for(int i=0;i<n;i++) {
       cin>>a[i];
   }
   int width=0;
   for(int i=0;i<n;i++) {
       if(a[i]>h)
        width=width+2;
       else
       width++;
   }
   cout<<width;
   return 0;
}
