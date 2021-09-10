#include <bits/stdc++.h>
using namespace std;
int main() {
int w[4];
for(int i=0 ; i<4 ; i++){
    cin>>w[i];
}
string pattern ;
cin>>pattern;
int cal = 0;
for(int i=0 ; i<pattern.length() ; i++){
    int x = (int)(pattern[i]-48);
    cal += w[x-1];
}
cout<<cal;
}
