#include <iostream>
#include<algorithm>
#define endl '\n'
using namespace std;
int main(){
int x;
cin>>x;
int steps =0;
if(x<=5) steps=1;
else{
while(x>0){
steps++;
x-=5;
}
}
cout<<steps;
return 0;
}
