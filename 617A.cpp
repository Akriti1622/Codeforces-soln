//Elephant - 617A
#include <iostream> 
using namespace std;
 
int main()
{
    int x;
    cin>>x;
    int ans=0;
    if(x/5>0) {
        ans=ans+x/5;
        x=x%5;
    }
    if(x/4>0) {
        ans=ans+x/4;
        x=x%4;
    }
    if(x/3>0) {
        ans=ans+x/3;
        x=x%3;
    }
    if(x/2>0) {
        ans=ans+x/2;
        x=x%2;
    }
    if(x/1>0) {
        ans=ans+x/1;
        x=x%1;
    }
    cout<<ans;
   return 0;
}
