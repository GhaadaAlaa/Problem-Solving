#include <bits/stdc++.h>
#include <string.h>
#define endl '\n'
typedef long long ll;
using namespace std;
int main(){
int t , n;
cin>>t;
while(t--){
cin>>n;
if((n==1 )||( n==2))
   {cout<<0<<endl;}
else
{if(n%2 == 1){cout<<((n/2))<<endl;}
if(n%2 == 0){cout<<((n/2)-1)<<endl;}
}
}
return 0;
}
