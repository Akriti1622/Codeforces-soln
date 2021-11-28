//581A - Vasya the Hipster
#include <iostream>
using namespace std;

int main()
{
    int a,b,diff,same;
    cin>>a>>b;
        diff=min(a,b);
        same=(max(a,b)-diff)/2;
        cout<<diff<<" "<<same;
    return 0;
}
