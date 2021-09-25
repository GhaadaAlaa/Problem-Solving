#include <bits/stdc++.h>
#define endl '\n'
typedef long long ll;
using namespace std;
int main(){
   int n , p , sum = 0;
   cin>>n;
   int n1 = n;
while(n1--){
cin>>p;
sum+=p;
}
int y = sum/100;
float x = (((float)sum/n));
printf("%f" , x);
return 0;
}
