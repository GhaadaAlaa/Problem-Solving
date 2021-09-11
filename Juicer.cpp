#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, b, d,size , wastes = 0 , empty = 0;
cin>>n>>b>>d;
while(n--){
    cin>>size;
    if(size<=b){
        wastes+=size;
    }
if(wastes>d){wastes = 0;
empty++;}
}
cout<<empty;
}

