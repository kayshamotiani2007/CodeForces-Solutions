#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    int total_xor=0;
    for (int i=0 ; i<n ; i++) {
        int val ;
        cin >> val;
        total_xor ^= val;
    }
    
    if (n%2!=0) {
        cout << total_xor << "
" ;
    }
    
    else {
        if(total_xor == 0) {
            cout << 0 << "
" ;
        }
        else {
            cout << -1 << "
" ;
        }
    }
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}