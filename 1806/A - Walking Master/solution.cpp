#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    if(d<b || (a+(d-b)) < c) {
        cout << -1 << "
" ;
    }
    
    else {
        long long moves = (d-b)+((a+(d-b))-c);
        
        cout << moves << "
" ;
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