#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n , k ;
    cin >> n >> k;
    
    vector<int> a(n);
    
    for ( int i=0 ; i < n ; i++){
        cin >> a[i];
    }
    
    if(k>1 || is_sorted(a.begin() , a.end())) {
        cout << "YES
";
        
    }
    else {
        cout << "NO
" ;
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