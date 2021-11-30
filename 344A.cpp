//Magnets - 344A
#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) {
       cin>>a[i];
   }
  int maxno=0,count=1;
  for(int i=1;i<n;i++) {
      if(a[i]!=a[i-1]) {
          count++;
          maxno=max(count,maxno);
      }
  }
  if(n>=1&&maxno==0) {
      maxno=1;
  }
  cout<<maxno;
   return 0;
}
