//791A - Bear and Big Brother
#include <iostream>
 
using namespace std;
 
int main()
{
    int a,b;
    cin>>a>>b;
    int k=1;
    while(k<10) {
        a=3*a;
        b=2*b;
        if(a>b) {
            break;
        }
        else
        k++;
    }
    cout<<k;
   return 0;
}
