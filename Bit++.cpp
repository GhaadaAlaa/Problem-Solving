#include <iostream>
#include<algorithm>
#define endl '\n'
using namespace std;
int main(){
int n;
cin>>n;
int x=0;
string op;
while(n--){
        cin>>op;
if(op[0] == '+'){
    x++;
}
if(op[0] == '-'){
   x--;
}
if(op[0] == 'X'){
    if(op[1] == '+'){
        x++;
    }
    if(op[1] == '-'){
        x--;
    }
}
}
cout<<x<<endl;
return 0;
}
