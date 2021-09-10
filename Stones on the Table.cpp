#include <bits/stdc++.h>
using namespace std;
int main(){
int len ;cin>>len;
string s ;cin>>s;
int clears = 0;
int i;
for(i=0 ; i<len-1 ; i++){
    if(s[i]==s[i+1])
        {clears++;
        }
}
cout<<clears;
}















