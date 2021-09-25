#include <bits/stdc++.h>
#include <string.h>
#define endl '\n'
typedef long long ll;
using namespace std;
int main(){
string s;
getline(cin , s);
int freq[26] = {0};
for(int i=0 ; i<s.size() ; i++){
if(!((s[i] == '{') || (s[i] == ',') || (s[i] == ' ') || (s[i] == '}') ))
freq[(int)s[i]-97]++;
}
int cnt=0;
for(int i = 0 ; i<26 ; i++){
if(freq[i]!=0)
    cnt++;
}
cout<<cnt<<endl;
return 0;
}
