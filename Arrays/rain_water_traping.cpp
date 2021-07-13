#include <iostream>

using namespace std;

int main() {

	int n;
	cout<<"Enter size of the array: ";
	cin>>n;

	int a[n];
	cout<<"Enter "<<n<<" Elements in array: ";
	for(int i = 0; i < n; i++) {
		cin>>a[i];
	}

	int left[n] = {-1}, right[n] = {-1};
	left[0] = a[0];

	for (int i = 1; i < n; ++i) {
		left[i] = max(left[i-1], a[i]);
	}

	right[n-1] = a[n-1];
	for (int i = n-2; i > 0; i--) {
		right[i] = max(right[i+1], a[i]);
	}

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		ans += max(left[i], right[i])-a[i];
	}
	cout<<ans;


	return 0;
}