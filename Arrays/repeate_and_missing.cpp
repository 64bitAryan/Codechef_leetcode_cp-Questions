#include <iostream>
#include <vector>

using namespace std;

void solution1(vector<int> v) {
	int u[v.size()+1] = {0};

	int repeat;
	int missing;

	for (int i = 0; i < v.size(); i++) {
		u[v[i]]++;
	}
	cout<<endl<<"Values in u array: ";
	for(int i: u) {
		cout<<i<<" ";
	}

	cout<<endl;

	for (int i = 1; i < v.size()+1; ++i){
		if(u[i] == 0) {
			missing = i;
		} 
		if(u[i] == 2) {
			repeat = i;
		}
	}

	cout<<"Missing: "<<missing<<" Repeated is: "<<repeat<<endl;
}

int main() {

	vector<int> v;
	int size;
	cout<<"Enter size of the array: ";
	cin>>size;

	cout<<"Enter "<<size<<" elements in array: ";
	for (int i = 0; i < size; i++){
		int x;
		cin>>x;

		v.push_back(x);
	}

	solution1(v);

	return 0;
}