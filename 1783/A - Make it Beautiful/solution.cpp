#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int count = 0;
    
    for (int i=0 ; i<n ; i++) {
        cin >> a[i];
    }
    
    if(a[0] == a[n-1]){
        cout << "NO
" ;
        return;
    }
    
    cout << "YES
" ;
    
    cout << a[n-1] << " " << a[0] << " ";
    
    for(int i=n-2 ; i>=1 ; i--) {
        cout << a[i] << " ";
    }
    
    cout << "
" ;
    
}           
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve() ;
    }
    return 0;
}