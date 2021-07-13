#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int moores_3(vector<int> res) {

	int candidate_1 = INT_MAX;
	int candidate_2 = INT_MAX;

	int count_1 = 0;
	int count_2 = 0;

	for (int i = 0; i < res.size(); ++i) {
		if (candidate_1==res[i]) {
			count_1++;
		} else if(candidate_2==res[i]) {
			count_2++;
		} else if (count_1 == 0) {
			count_1++;
			candidate_1 = res[i];
		} else if (count_2 == 0) {
			count_2++;
			candidate_2 = res[i];
		} else {
			count_1--;
			count_2--;
		}
	}

	count_1 = 0;
	count_2 = 0;

	for (int i = 0; i < res.size(); ++i) {
		if(candidate_1==res[i]) count_1++;
		else if(candidate_2==res[i]) count_2++;
	}

	if(count_1>res.size()/3) return candidate_1;
	if(count_2>res.size()/3) return candidate_2;

	return -1;
}

void moores_2(vector<int> res) {

	int candidate = 0;
	int count = 1;

	for(int i = 1; i < res.size(); i++) {

		if (res[i] == res[candidate])
			count++;
		else 
			count--;

		if(count == 0) {
			candidate = i;
			count = 1;
		}
	}

	count = 0;
	for (int i = 0; i < res.size(); i++) {
		if(res[i] == res[candidate])
			count++;
	}

	if(count > res.size()/2)
		cout<<res[candidate]<<" is the majority Element. "<<endl;
	else {
		cout<<"No such Element found"<<endl;
	}
}

int main() {

	cout<<"------- Moores N/2 N/3 Max Element -------"<<endl<<endl;

	int size;
	vector<int> res;
	cout<<"Enter size of the array: ";
	cin>>size;

	cout<<"Enter "<<size<<" Elements in array: ";
	for (int i = 0; i < size; ++i) {
		int x;
		cin>>x;
		res.push_back(x);
	}

	//moores_2(res);
	int ans = moores_3(res);

	if (ans == -1) {
		cout<<"No Such Element Found.";
	} else {
		cout<<"N/3 Max Element is: "<<ans<<endl;
	}


	return 0;
}