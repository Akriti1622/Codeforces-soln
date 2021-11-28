//Casimir's String Solitaire - 1579A
#include <iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t>0) {
       string s;
   cin>>s;
   int A=0,B=0,C=0;
   for(int i=0;i<s.length();i++) {
       if(s[i]=='A')
           A++;
       else if(s[i]=='B')
           B++;
       else if(s[i]=='C')
       C++;
   }
   if(B==A+C)
       cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;
   t--;
   }
   return 0;
}
