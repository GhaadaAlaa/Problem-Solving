#include <bits/stdc++.h>
#include <string.h>
#define endl '\n'
typedef long long ll;
using namespace std;
int main(){
int t , k ,cnt , cnt1 , cnt2;
string s;
cin>>t;
while(t--){
    cnt=0;
    cnt1=0;
    cnt2=0;
    int freq[26]={0};
    cin>>s;
    if(s.size() == 1){
            cout<<0<<endl;
            continue;
    }
  for(int i=0 ; i<s.size() ; i++){
    freq[s[i]-97]++;
}
if(freq[s[0]-97] == s.size()){
    cout<<1<<endl;
    continue;
}
for(int i=0 ; i<26 ; i++){
if(freq[i]== 1) cnt++;
    }
if(cnt == s.size()){ cout<<cnt/2<<endl;
continue;}
for(int i=0 ; i<26 ; i++){
if(freq[i]>=2) cnt1++;
if(freq[i]== 1) cnt2++;
    }
    cout<<cnt1+(cnt2/2)<<endl;
}
return 0;
}
