#include <bits/stdc++.h>
#define endl '\n'
typedef long long ll;
using namespace std;

int main(){
string n1 , n2;
int x;
cin>>n1;
cin>>n2;
for(int i= 0 ; i<n1.size() ; i++){
        x=(((int)n1[i])-48)^(((int)n2[i])-48);
    cout<<x;
}
return 0;
}
