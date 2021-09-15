#include <iostream>
#include<algorithm>
#define endl '\n'
using namespace std;
int main(){
string s;
cin>>s;
int arr[105];
int j=0;
for(int i=0 ; i<s.size() ; i++){
 if(s[i]!='+')
 {arr[j++] = s[i];
}
}
sort(arr , arr+j);
for(int i=0 ; i<j-1 ; i++){
cout<<arr[i]-48<<'+';
}
cout<<arr[j-1]-48;
return 0;
}
