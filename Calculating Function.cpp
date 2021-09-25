#include <iostream>
#define endl '\n'
typedef long long ll;
using namespace std;
int main(){
ll n;
cin>>n;
if(n%2 == 0){
    cout<<n/2<<endl;
}
if(n%2 == 1){
    cout<<(n/2)-n<<endl;
}
return 0;
}
