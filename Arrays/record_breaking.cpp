#include<iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {

	int n;cin>>n;
	int a[n];
	int maxDay = INT_MIN;

	bool ans[n];

	for (int i = 0; i < n; ++i)
		cin>>a[i];

	for (int i = 0; i < n-1; ++i) {
		maxDay = max(a[i], maxDay);
		if(a[i] >= maxDay-a[i] && a[i] > a[i+1] )
			ans[i] = true;
		else
			ans[i] = false;
	}

	if (a[n]>maxDay) ans[n] = true;

	else ans[n] = false;
	
	cout<<maxDay<<endl;

	for(auto i: ans) {
		if(i==true) cout<<":) ,";
		else cout<<":( ,"; 
	}

	return 0;
}