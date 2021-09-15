#include <iostream>
#define endl '\n'
typedef long long ll;
using namespace std;
int main(){
ll n;cin>>n;
ll lucky = 0;
while(n){
    int mod = n%10;
    if((mod==4 || mod ==7)){
      lucky++;
    }
n/=10;
}
if(lucky == 7 || lucky == 4)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
return 0;
}
