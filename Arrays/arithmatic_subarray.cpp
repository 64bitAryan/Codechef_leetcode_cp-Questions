#include <iostream>

using namespace std;

int main() {

	int size;
	cout<<"Enter size of the Array: ";
	cin>>size;

	bool flag = true;

	int arr[size];

	cout<<"Enter "<<size<<" Elements in array: ";
	for (int i = 0; i < size; ++i)
		cin>>arr[i];

	for (int i = 1; i < size-1; ++i) {
		if(arr[i]-arr[i-1] != arr[i+1] - arr[i])
			flag = false;
	}

	if (flag==true)
		cout<<"Given array is arithmatic array"<<endl;
	else
		cout<<"Given array is not arithmatic array"<<endl;


	return 0;
}