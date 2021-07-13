#include <iostream>
#include <vector>
#define int long long

using namespace std;

signed main() {
    
    int n;
    int ans = 0;
    cin>>n;
    vector<int> v;
    
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    for(int i: v){
        ans = ans + i;    
    }
    
    cout<<endl<<ans;
	
}
