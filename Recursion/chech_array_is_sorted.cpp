#include <iostream>

using namespace std;

bool sorted(int arr[], int n) {
	
	if(n==1) return 1;

	bool restArray = sorted(arr+1, n-1);

	return (arr[0] < arr[1] && restArray);
}

int firstOccurance(int arr[], int n, int i, int key){
	if(i==n) {
		return -1;
	}

	if(arr[i] == key) {
		return i;
	}
	return firstOccurance(arr, n, i+1, key);
}

int main() {

	int arr[] = {1,2,3,8,5,6};
	cout<<sorted(arr, 6);
	return 0;
}