// Kadane's algorithm

#include <iostream>
#include <vector>

using namespace std;

int main() {

	cout<<"------ Max subset Sum ------"<<endl<<endl;

	vector<int> v;

	int n;
	cout<<"Enter size of the array: ";
	cin>>n;

	cout<<"Enter "<<n<<" Elements in array: ";
	for (int i = 0; i < n; ++i){
		int x;
		cin>>x;
		v.push_back(x);
	}

	int maxSum = 0;
	int currSum = 0;

	for (int i = 0; i < v.size(); ++i){
		currSum += v[i];
		if(currSum > maxSum) {
			maxSum = currSum;
		}
		if (currSum < 0) {
			currSum = 0;
		}
	}

	cout<<"Max sum of the array is: "<<maxSum<<endl;

	return 0;
}