#include <iostream>

using namespace std;

int main() {

	int size;
	cout<<"Enter size of the Array: ";
	cin>>size;

	int arr[size];
	int ans[size];
	int max = 0; 

	cout<<"Enter "<<size<<" Elements in array: ";
	for (int i = 0; i < size; ++i) {
		cin>>arr[i];
	}

	for (int i = 0; i < size; ++i){
		if(arr[i] >= arr[max]) {
			max = i;
		}
		ans[i] = arr[max];
	}

	cout<<"Max till for corresponding index is: ";
	for(auto i: ans) {
		cout<<i<<", ";
	}
	
	return 0;
}