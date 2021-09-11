#include <bits/stdc++.h>
using namespace std;
int main()
{
int y;
int w;
cin>>y>>w;
int win = y>=w?y:w;
int cnt=0;
while(win<=6){
    win++;
    cnt++;
}
int com = __gcd(cnt , 6);
int nom = cnt/com;
int dem = 6/com;
cout<<nom<<'/'<<dem;
}

