#include <iostream>
#define endl '\n'
typedef long long ll;
using namespace std;

int main(){
int n , op ,flag=0;
cin>>n;
while(n--){
    cin>>op;
    if(op == 1 ) flag=1;
}
if(flag){
    cout<<"HARD"<<endl;
}
else
{
 cout<<"EASY"<<endl;
}
return 0;
}
