#include <bits/stdc++.h>
#include <string.h>
#define endl '\n'
typedef long long ll;
using namespace std;
int main(){
int n , faces = 0;
string s;
cin>>n;
while(n--){
cin>>s;
if(s[0] == 'T'){faces+=4;}
if(s[0] == 'C'){faces+=6;}
if(s[0] == 'O'){faces+=8;}
if(s[0] == 'D'){faces+=12;}
if(s[0] == 'I'){faces+=20;}
}
cout<<faces<<endl;
return 0;
}
