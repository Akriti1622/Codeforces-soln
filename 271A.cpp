//Beautiful Year - 271A
#include <iostream>
 
using namespace std;
 
int main()
{
   int y;
   cin>>y;
   int z;
   for(z=y+1;z<=9050;z++) {
       int o,t,h,th;
       o=z%10;
       t=(z/10)%10;
       h=(z/100)%10;
       th=(z/1000)%10;
       if(o!=t&&o!=h&&o!=th&&t!=h&&t!=th&&h!=th)
           break;
   }
   cout<<z;
   return 0;
}
