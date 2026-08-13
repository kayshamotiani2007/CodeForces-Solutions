#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n , k;
    cin >> n >> k;
    
    if(n%2==0) {
        cout << "YES" << "
" ;
    }
    
    else {
        if(k%2 != 0) {
            cout << "YES" << "
" ;
            
        }
        else {
            cout << "NO" << "
" ;
        }
    }
    
}
    
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve() ;
    }
    return 0;
}