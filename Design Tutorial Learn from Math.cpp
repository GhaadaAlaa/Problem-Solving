#include <iostream>
#define endl '\n'
typedef long long ll;
using namespace std;
//return 0 if not prime , return 2 if prime
int Isprime(int n){
for(int i=2 ; i*i<=n ; i++){
 if(n%i==0){
    return 0;
 }
}
    return 1;
}
int main(){
int n;
cin>>n;
int first = 4;
int second = n-first;
while(!(Isprime(first)==0 && Isprime(second) ==0 )){
 first++;
 second--;
}
cout<<first<<" "<<second<<endl;
return 0;
}
