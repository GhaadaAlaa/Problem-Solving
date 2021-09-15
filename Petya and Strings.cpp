#include <iostream>
#include<algorithm>
#define endl '\n'
using namespace std;
int main(){
string s1 , s2;
cin>>s1;
cin>>s2;
int cnt=0;
for(int i=0 ; i<s1.size() ; i++){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    if((s1[i]>s2[i])){
        cnt=1;
        break;
    }
     if((s1[i]<s2[i])){
     cnt=-1;
        break;

    }
}
cout<<cnt<<endl;
return 0;
}
