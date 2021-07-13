#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;cin>>t;
    int sum = 0;
    int count = 0;
    
    while(t--) {
        int size;cin>>size;
	    int arr[size];
	    int k;
        cin>>k;
        
	    for (int i = 0; i < size; ++i) {
		    cin>>arr[i];
		    sum += arr[i];
	    }
	    


	    for (int i = 0; i < size; ++i) {

		    if (arr[i]+k > sum-arr[i]) {
			    count++;
		    }
	    }

	    cout<<count<<endl;
	    count = 0;
	    sum = 0;
    }
	return 0;
}