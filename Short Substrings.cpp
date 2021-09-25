#include <iostream>
#define endl '\n'
typedef long long ll;
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
string s ;
cin>>s;
if(s.size() == 2){
    cout<<s<<endl;
}else{
char s1[100];
s1[0]=s[0];
int j=1;
for(int i=1 ; i<s.size()-1 ; i+=2){
s1[j++]=s[i];
}
s1[j++]=s[s.size()-1];
cout<<s1<<endl;
}
}
return 0;
}
