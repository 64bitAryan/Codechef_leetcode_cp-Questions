#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    vector<int> v;    
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    int a = 0;
    int b = 0;
    int ans = 0;
    
    for(int i=0; i<n; i++) {
        if(i%2 == 0) {
            a += v[i];
        } else {
            b += v[i];
        }
    }
    
    ans = 2*min(a,b);
    
    cout<<ans<<endl;
    
    return 0;
}