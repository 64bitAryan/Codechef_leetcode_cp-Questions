#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;

	while(t--) {
	    int sum = 0;
	    map<int, int> m;
		int n;
		cin>>n;

		for (int i = 0; i < n; ++i){
			int a, b;
			cin>>a>>b;
			if(a<=8) {
			    m[a] = max(m[a], b);
			}
		}

		map<int, int>::iterator itr;
		for(itr = m.begin(); itr != m.end(); itr++) {
			sum += itr->second;
		}

		cout<<sum<<endl;
	}

	return 0;
}