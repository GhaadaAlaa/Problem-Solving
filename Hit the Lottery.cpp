#include <bits/stdc++.h>
#define endl '\n'
typedef long long ll;
using namespace std;
int main(){
int n , div , cnt = 0 ;
cin>>n;
div = n/100;
if(div > 0 ){
n=n%100;
cnt+=div;
}
div = n/20;
if(div > 0 ){
n=n%20;
cnt+=div;
}
div = n/10;
if(div > 0 ){
n=n%10;
cnt+=div;
}
div = n/5;
if(div > 0 ){
n=n%5;
cnt+=div;
}
div = n/1;
cnt+=div;
n=0;
cout<<cnt<<endl;
return 0;
}
