//Wrong Subtraction - 677A
#include <iostream>
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    int last_digit;
    while(k>0) {
        last_digit=n%10;
        if(last_digit>0) {
            n=n-1;
            k--;
        }
        else {
            n=n/10;
            k--;
        }
    }
    cout<<n;
   return 0;
}
