//Anton and Danik - 734A
#include <iostream>
 
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int x,anton=0;
   x=s.length();
   for(int i=0;i<x;i++) {
    if(s[i]=='A')
        anton++;
   }
   int danik;
   danik=n-anton;
   if(anton==danik)
   cout<<"Friendship";
   else if(anton>danik)
   cout<<"Anton";
   else
   cout<<"Danik";
   return 0;
}
