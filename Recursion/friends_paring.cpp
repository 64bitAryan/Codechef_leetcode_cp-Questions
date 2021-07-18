#include <iostream>

using namespace std;

int findPair(int n) {
	if(n==0 || n==1 || n==2) return n;

	return findPair(n-1) + findPair(n-2) * (n-1);
}

int main() {

	cout<<findPair(4);

	return 0;
}