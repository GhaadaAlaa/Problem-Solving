#include <iostream>
#include<algorithm>
#define endl '\n'
using namespace std;
int main(){
int n;
cin>>n;
int pass=0;
int maxpass=0;
while(n--){
    int a,b;
    cin>>a>>b;
    pass=pass-a+b;
if(maxpass<pass){
    maxpass=pass;
}
}
cout<<maxpass<<endl;
return 0;
}
