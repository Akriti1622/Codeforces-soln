//266A - Stones on the Table
#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    string stones;
    cin>>stones;
    int i=0,j=1,count=0;
    while(i<n&&j<n) {
        if(stones[i]==stones[j]) {
            count++;
            j++;
        }
        else {
            i=j;
            j++;
        }
    }
    cout<<count;
   return 0;
}
