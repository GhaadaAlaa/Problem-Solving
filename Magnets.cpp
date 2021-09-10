#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
int mag[100000];
int t;
cin>>t;
cin>>mag[0];
int cnt=1;
for(int i=1 ; i<t ; i++){
    cin>>mag[i];
    if(mag[i]!=mag[i-1])
    {
        cnt++;
    }
}
cout<<cnt;
}
