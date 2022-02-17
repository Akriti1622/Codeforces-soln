//Boy or Girl - 236A
#include <iostream>
 
using namespace std;
 
int main()
{
    string name;
    cin>>name;
    int same=0,n;
    n=name.length();
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(name[i]==name[j]) {
            same++;
            break;
            }
        }
    }
    n-=same;
    if(n%2==0&&n>0)
    cout<<"CHAT WITH HER!";
    else 
    cout<<"IGNORE HIM!";
   return 0;
}
