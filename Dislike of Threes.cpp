#include <bits/stdc++.h>
#define endl '\n'
typedef long long ll;
using namespace std;
int main(){
int k , cnt , i;
int t; cin>>t;
while(t--){
cin>>k;
cnt=0;
for(i=1 ; i<=1666 ; i++){
    if(i%3 == 0)  continue;
    if(i%10 == 3) continue;
    cnt++;
    if(cnt==k)
        break;
}
cout<<i<<endl;
}
return 0;
}
