#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int min_diff = INT_MAX;
    vector<int> arr(n);
    
    for (int i=0 ; i<n ; i++) {
        cin >> arr[i];
    }
        
    for (int i=0 ; i<n-1 ; i++) {
        if(arr[i+1] < arr[i]) {
            cout << 0 << "
" ;
            return;
            }
        min_diff = min(min_diff , arr[i+1]-arr[i]);
            }
        cout << (min_diff/2) + 1 << "
";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}