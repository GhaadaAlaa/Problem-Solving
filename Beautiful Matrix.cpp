#include <iostream>
#include<algorithm>
#define endl '\n'
using namespace std;
int main(){
    int r,c;
int arr[5][5];
for(int i=0 ; i<5 ; i++){
    for(int j=0 ; j<5 ; j++){
        cin>>arr[i][j];
        if(arr[i][j])
        {
           r=i;
           c=j;
            break;
        }
    }
}
int cnt=0;
while(r!=2){
    if(r>2) {
        r--;
        cnt++;
    }
      if(r<2) {
        r++;
        cnt++;
    }
}
while(c!=2){
    if(c>2) {
        c--;
        cnt++;
    }
      if(c<2) {
        c++;
        cnt++;
    }
}
cout<<cnt<<endl;
return 0;
}
