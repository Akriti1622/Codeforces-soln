//Way Too Long Words - 71A
#include <iostream>
 
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++) {
    string word;
    cin>>word;
    if(word.length()>10) {
        int length;
        length=word.length();
        cout<<word[0]<<length-2<<word[length-1]<<endl;
    }
    else
        cout<<word<<endl;
   }
   return 0;
}
