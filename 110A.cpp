//Nearly Lucky Number - 110A
#include <iostream>
using namespace std;
int main()
{
   int64_t n;
   cin>>n;
   int count=0;
   while(n>0) {
       int rem;
       rem=n%10;
       if(rem==4||rem==7) {
           count++;
       }
       n=n/10;
   }
   if(count==4||count==7) {
   cout<<"YES";
   }
   else {
   cout<<"NO";
   }
   return 0;
}
