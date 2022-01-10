//339A - Helpful Maths
#include <iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int n;
    n=a.length();
    int counter=1;
    while(counter<n) {
        for(int i=0;i<n-counter;i+=2) {
            if(a[i]>a[i+2]) {
                int temp=a[i];
                a[i]=a[i+2];
                a[i+2]=temp;
            }
        }
        counter++;
   }
        cout<<a;
    return 0;
}
