#include <bits/stdc++.h>
#include <string.h>
#define endl '\n'
typedef long long ll;
using namespace std;
int string_cmp(string s1 , string s2){
for(int i=0 ; i<s1.size() ; i++){
        if(s1.size() != s2.size()){ return 1;}
    if(s1[i]!=s2[i]){
return 1;
    }
  }
return 0;
}
int main(){
string s1 , s2 , s3 , s4;
cin>>s1;
cin>>s2;
cin>>s3;
s4 = s1 + s2;
sort(s3.begin() , s3.end());
sort(s4.begin() , s4.end());
if(string_cmp(s3 , s4)==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}
