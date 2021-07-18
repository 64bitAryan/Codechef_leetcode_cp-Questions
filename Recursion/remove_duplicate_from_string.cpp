#include <iostream>

using namespace std;

string removeDeplicate(string s) {
	if(s.length() == 0) return "";

	char first = s[0];
	
	string ans = removeDeplicate(s.substr(1));

	if(first==ans[0]) {
		return ans;
	}
	return first+ans;
}

int main() {

	cout<<removeDeplicate("aaaabbbbcccedddhhhhj");

	return 0;
}