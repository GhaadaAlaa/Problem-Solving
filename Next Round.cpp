#include <iostream>
#include<algorithm>
using namespace std;
int main(){
int n , k ,cnt = 0;
cin>>n>>k;
int arr[50];
for(int i=0 ; i<n ; i++){
    cin>>arr[i];
}
sort(arr , arr + n);
for(int i=n-1 ; i>=n-k ; i--){
    if(arr[i]>0) cnt++;
}
if(arr[n-k]>0){
for(int i=0 ; i<n-k ; i++){
    if(arr[n-k] == arr[n-k-1-i])
        cnt++;
}
}
cout<<cnt<<'\n';
return 0;
}
