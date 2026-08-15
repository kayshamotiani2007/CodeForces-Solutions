#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n ;
    cin >> n;
    vector<int> arr(n) ;
    int MAX=0 ; 
    int count = 0;
    
    
    
    for (int i=0 ; i<n ; i++) {
        cin >> arr[i];
        
        if (arr[i] == 0) {
            count++ ;
            
        }
        else {
            MAX = max(MAX , count);
            count = 0;
        }
    }
    MAX = max(MAX , count);
    cout <<  MAX << "
";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve() ;
    }
    return 0;
}