#include <iostream>

using namespace std;

int Sum(int n) {
	if(n==0) return 0;

	int s = (n-1);
	return n + s;
}

int main() {

	int x;cin>>x;
	int ans = Sum(x);
	cout<<"ans is: "<<ans;

	return 0;
}