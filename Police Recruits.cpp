#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
char flag = 0;
int crimes = 0 , officers = 0;
while(t--){
    int event ;
    cin>>event;
    if(event<0 && flag == 0)
crimes++;
if(event > 0)
{
    officers += event;
    flag = 1;
}
if(event < 0 && flag==1 && officers !=0)
officers --;

    if(officers == 0)
        flag = 0;
}
cout<<crimes;
}
