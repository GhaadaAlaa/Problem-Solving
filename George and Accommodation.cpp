#include <iostream>
#define endl '\n'
typedef long long ll;
using namespace std;

int main(){
int t , p , q;
cin>>t;
int cnt=0;
while(t--){
cin>>p>>q;
if(q-p >=2)
    cnt++;
}
cout<<cnt<<endl;
return 0;
}
