#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	int n, k;cin>>n>>k;
	vector<int> a;

	int s = 0, e = n-1;

	sort(a.begin(), a.end());

	for (int i = 0; i < n; ++i) {
		int x;cin>>x;
		a.push_back(x);
	}

	while(s < e) {
		int currSum = a[s] + a[e];
		if(currSum == k) {
			break;
		} 
		else if(currSum < k) s++;
		else if(currSum > k) e--;
	}

	cout<<"Number at index "<<s+1<<" & "<<e+1<<" gives the sum "<<a[s]+a[e]<<endl;

	return 0;
}