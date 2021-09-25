#include <iostream>
#define endl '\n'
typedef long long ll;
using namespace std;
int distinct(int n){
int arr[4];
int i=0;
while(n){
arr[i++]= n%10;
n/=10;
}
for(int j=0 ; j<i-1 ;j++ ){
    for(int k=j+1 ; k<i ; k++)
        if(arr[j] == arr[k]){
            return 0;
        }
}
return 1;
}
int main(){
int y;
cin>>y;
int next = y+1;
while(distinct(next) == 0){
    next++;
}
cout<<next<<endl;
return 0;
}
