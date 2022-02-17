//Beautiful Matrix - 263A
#include <iostream>
 
using namespace std;
 
int main()
{
    int a[5][5],r,col;
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cin>>a[i][j];
            if(a[i][j]==1) {
                r=i;
                col=j;
            }
        }
    }
    int ans=0;
    while(r!=2||col!=2) {
      if(r>2) {
          swap(a[r][col],a[r-1][col]);
          r--;
          ans++;
      } 
      else if(r<2) {
          swap(a[r][col],a[r+1][col]);
          r++;
          ans++;
      } 
      else if(col>2) {
          swap(a[r][col],a[r][col-1]);
          col--;
          ans++;
      } 
      else if(col<2) {
          swap(a[r][col],a[r][col+1]);
          col++;
          ans++;
      } 
    }
    cout<<ans;
    return 0;
}
