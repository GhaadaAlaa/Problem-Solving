#include <bits/stdc++.h>
#define endl '\n'
typedef long long ll;
using namespace std;
int main(){
int n;
cin>>n;
if(n==1){
    cout<<"I hate it"<<endl;
}
else{
for(int i=1 ; i<n ; i++){
    if(i%2 == 1){
        cout<<"I hate that ";
    }
    if(i%2 == 0){
        cout<<"I love that ";
    }
}
if(n%2 == 1){
    cout<<"I hate it";
}
else{
   cout<<"I love it";
}
}
return 0;
}
