//Word - 59A
#include <iostream>
 
using namespace std;
 
int main()
{
    string word;
    cin>>word;
   int n,upper=0,lower=0;
   n=word.length();
   for(int i=0;i<n;i++) {
    if(word[i]>=65&&word[i]<=90) {
        upper++;
    }
    else if(word[i]>=97&&word[i]<=122) {
        lower++;
    }
   }
   if(upper<=lower) {
           for(int i=0;i<n;i++) {
               if(word[i]>=65&&word[i]<=90) {
               word[i]+=32;
           }
           
       }    
           }
   else if(upper>lower) {
       for(int i=0;i<n;i++) {
           if(word[i]>=97&&word[i]<=122) {
               word[i]-=32;
           }
       }
   }
           cout<<word;
   return 0;
}
