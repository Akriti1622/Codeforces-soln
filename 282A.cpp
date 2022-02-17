//Bit++ - 282A
#include <iostream>
 
using namespace std;
 
int main()
{
   int n,x=0;
   cin>>n;
   for(int i=0;i<n;i++) {
       string state;
       cin>>state;
       if(state[0]=='+'||state[1]=='+') {
           x++;
       }
       else if(state[0]=='-'||state[1]=='-') {
           x--;
       }
   }
   cout<<x;
   return 0;
}
