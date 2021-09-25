#include <bits/stdc++.h>
#include <string.h>
#define endl '\n'
typedef long long ll;
using namespace std;
int main(){
int n,k , totalt = 0 , problems = 0;
cin>>n>>k;
for(int i=1 ; i<=n ; i++){
 totalt =totalt + i*5;
 if((totalt+k)>240) break;
 else problems++;
}
cout<<problems<<endl;
return 0;
}
