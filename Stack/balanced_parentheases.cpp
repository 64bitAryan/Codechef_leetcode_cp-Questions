#include <iostream>
#include <stack>

using namespace std;

int main() {

	stack<char> st;
	string str;
	getline(cin, str);

	bool ans = true;

	for (int i = 0; i < str.length(); ++i) {
		if(str[i] == '{' || str[i] == '[' || str[i] == '(')
			st.push(str[i]);

		else if(str[i] == '}') {
			if(st.top() == '{')
				st.pop();
			else {
				ans = false;
				break;
			}
		} else if(str[i] == ')') {
			if(st.top() == '(')
				st.pop();
			else {
				ans = false;
				break;
			}
		} else if(str[i] == ']') {
			if(st.top() == '[')
				st.pop();
			else {
				ans = false;
				break;
			}
		}
	}

	if(!st.empty()) ans = false;


	if(ans == true) cout<<"Parentheases is balalnced"<<endl;
	else cout<<"Parentheases is not balalnced"<<endl;


	return 0;
}