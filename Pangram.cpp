#include <bits/stdc++.h>
#define endl '\n'
typedef long long ll;
using namespace std;
int main(){
int n; cin>>n;
string s; cin>>s;
int freq[26] = {0};
for(int i=0 ; i < n ; i++){
    char c=tolower(s[i]);
    freq[(int)c-97]+=1;
}
int flag = 0;
for(int i=0 ; i<26 ; i++){
    if(freq[i] == 0){
        flag=1;
        break;
    }
}
if (flag)
    cout<<"NO"<<endl;
else
    cout<<"YES"<<endl;
return 0;
}
