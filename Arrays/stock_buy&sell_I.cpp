#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {

	int n;
	cout<<"Enter size of the array: ";
	cin>>n;

	int a[n];
	cout<<"Enter "<<n<<" Elements in array: ";

	for(int i = 0; i < n; i++)
		cin>>a[i];

	int minSoFar = a[0];
	int maxProfit = 0;

	for (int i = 0; i < n; i++) {
		minSoFar = min(minSoFar, a[i]);

		int profit = a[i] - minSoFar;
		maxProfit = max(maxProfit, profit);
	}

	return 0;
}