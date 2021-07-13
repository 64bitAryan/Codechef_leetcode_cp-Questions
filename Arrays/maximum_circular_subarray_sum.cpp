#include <iostream>
#include <climits>

using namespace std;

int main() {

	int n;cin>>n;
	int a[n];
	int sum = 0;
	int maxSum = INT_MIN;
	int currSum = 0;

	for (int i = 0; i < n; ++i) {
		cin>>a[i];
		sum += a[i];
		a[i] = -a[i];
	}

	for (int i = 0; i < n; ++i) {
		currSum += a[i];
		if(currSum > maxSum) 
			maxSum = currSum;
		if (currSum < 0) {
			currSum = 0;
		}
	}

	cout<<"ans is: "<<sum - (-maxSum)<<endl;


	return 0;
}