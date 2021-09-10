#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a[100];
    int i=0;
    while(t--){
        cin>> a[i++];
    }
sort(a , a+i);
for(int j=0; j<i ; j++)
    cout<<a[j]<<" ";
}
