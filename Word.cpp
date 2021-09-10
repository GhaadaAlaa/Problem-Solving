#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
string s ;
cin>>s;
int upper = 0 ,lower = 0 ;
for(int i=0 ; i<s.length() ; i++){
if(s[i] >=65 && s[i]<=90)
    upper++;
if(s[i] >=97 && s[i]<=122)
    lower++;
}
if(lower >= upper){
for(int i=0 ; i<s.length() ; i++){
        s[i]=tolower(s[i]);
}
cout<<s;
}
else{
    for(int i=0 ; i<s.length() ; i++){
        s[i]=toupper(s[i]);
}
cout<<s;
}
}
