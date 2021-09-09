#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    int years= 0;
    int lw , bw;
    cin>>lw>>bw;
    while(lw<=bw ){
        lw*=3;
        bw*=2;
        years++;
    }
    cout<<years<<endl;
}
