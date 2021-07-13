#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int t;
	cin>>t;

	while(t--) {
		int d,x,y,z;
		cin>>d>>x>>y>>z;

		cout<<max((7*x), (d*y)+((7-d)*z))<<endl;
	}


	return 0;
}