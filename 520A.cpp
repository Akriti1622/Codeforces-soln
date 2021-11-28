//Pangram - 520A
#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int a[26];
   for(int i=0;i<26;i++) {
       a[i]=0;
   }
  for(int i=0;i<n;i++) {
      if(s[i]>=65&&s[i]<=90) {
          s[i]=s[i]+32;
      }
      a[s[i]-97]++;
  }
  int k;
  for(k=0;k<26;k++) {
      if(a[k]==0) {
          cout<<"NO";
          break;
      }
  }
  if(k==26)
  cout<<"YES";
   return 0;
}
