#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {

	int n;
	cin>>n;

	int a[n];
	for (int i = 0; i < n; ++i) {
		cin>>a[i];
	}

	const int N = 1e6+2;

	int idx[N] = {-1};
	int minIdx = INT_MAX;

	for (int i = 0; i < n; ++i) {
		if(idx[a[i]] != 0) {
			minIdx = min(minIdx, idx[a[i]]);
		} else {
			idx[a[i]] = i;
		}
	}

	if(minIdx == INT_MAX) cout<<"-1"<<endl;
	else cout<<minIdx + 1<<endl;

	return 0;
}