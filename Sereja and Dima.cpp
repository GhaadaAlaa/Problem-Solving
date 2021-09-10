#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
	deque<int> dq;
	int t;
	cin>>t;
	for(int i=0 ; i<t ; i++){
        int x;
        cin>>x;
        dq.push_back(x);
	}
	int s = 0, d = 0;
	for (int i = 0; i < t; i++) {
		if (i % 2 == 0) {
			if (dq.front() < dq.back()) {
				s += dq.back();
				dq.pop_back();
			}
			else {
                s += dq.front();
				dq.pop_front();
			}
		}
		if (i % 2 == 1) {
			if (dq.front() < dq.back()) {
				d += dq.back();
				dq.pop_back();
			}
			else {
                d += dq.front();
				dq.pop_front();
			}
		}
	}
cout<<s<<" "<<d;
}
