#include <iostream>

using namespace std;

int main()
{
int t , n;
cin>>t;
string s;
while(t--){
cin>>n;
cin>>s;
    for(int i=0 ; i<n ; i++){
     if(s[i] == 'U'){
        cout<<'D';
     }
        if(s[i] == 'D'){
        cout<<'U';
     }
     if(s[i] == 'L'){
        cout<<'L';
     }
     if(s[i] == 'R'){
        cout<<'R';
     }
    }
    cout<<'\n';
    }
    return 0;
}
