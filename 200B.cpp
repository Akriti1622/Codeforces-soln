//Drinks - 200B
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int p[n];
   for(int i=0;i<n;i++) {
       cin>>p[i];
   }
   float sum=0;
   for(int i=0;i<n;i++) {
       sum=sum+p[i];
   }
   float per;
   per=sum/n;
   cout<<setprecision(12)<<per;
   return 0;
}
