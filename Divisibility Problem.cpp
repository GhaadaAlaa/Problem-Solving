#include <bits/stdc++.h>
#define endl '\n'
typedef long long ll;
using namespace std;
int main(){
int a,b,t;
cin>>t;
while(t--){
    cin>>a>>b;
    if(a%b == 0){cout<<0<<endl;}
    else{
    cout<<b-(a%b)<<endl;
        }
}
return 0;
}
