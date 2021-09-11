#include <iostream>
using namespace std;
int main()
{
int h[30] , g[30];
int n;
cin>>n;
for(int i=0 ; i<n ; i++){
    cin>>h[i]>>g[i];
}
int cnt=0;
for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++)
    {
if(i==j) continue;
if(h[i] == g[j]) cnt++;
    }
  }
  cout<<cnt;
}

