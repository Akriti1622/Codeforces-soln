//546A - Soldier and Bananas
#include <iostream>
 
using namespace std;
 
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int total,borrow;
    total=k*w*(w+1)/2;
    borrow=total-n;
    if(borrow>0)
        cout<<borrow;
    else
    cout<<"0";
   return 0;
}
