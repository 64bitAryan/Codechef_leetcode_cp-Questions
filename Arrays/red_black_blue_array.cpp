#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sortVector(vector<int> v) {

	if(v.size() == 0) {
		vector<int> ans;
		ans.push_back(0);
		return ans;
	}

	int start = 0;
	int mid = 0;
	int end = v.size()-1;

	while(mid <= end) {
		if(v[mid]==0){
			swap(v[mid], v[start]);
			start++;
			mid++;
		} else if(v[mid] == 1){
			mid++;
		} else {
			swap(v[mid], v[end]);
			end--;
		}
	}

	return v;
}

int main() {

	vector<int> v;
	int size;
	cout<<"Enter size the array: ";
	cin>>size;


	cout<<"Enter "<<size<<" elements in array: ";
	for(int i = 0; i < size; i++) {
		int x;
		cin>>x;
		v.push_back(x);
	}

	vector<int> ans = sortVector(v);

	cout<<"Array After Sorting is: ";

	for(auto i: ans) {
		cout<<i<<", ";
	}

	return 0;
}