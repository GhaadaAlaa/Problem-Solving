#include <iostream>
#include<algorithm>
#define endl '\n'
using namespace std;
int main(){
int k , n ,w , sum = 0;
cin>>k>>n>>w;
for(int i=0 ; i<w ; i++)
 sum+=(i+1)*k;
if(sum <= n) cout<<0;
else cout<<sum-n<<endl;
return 0;
}
