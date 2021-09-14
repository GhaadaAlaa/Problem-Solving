#include <iostream>
using namespace std;
int main(){
int n , cnt = 0;
cin>>n;
while(n--){
    int p , v , t;
    cin>>p>>v>>t;
if(p+v+t == 2 || p+v+t == 3) cnt++;
}
cout<<cnt;
return 0;
}
