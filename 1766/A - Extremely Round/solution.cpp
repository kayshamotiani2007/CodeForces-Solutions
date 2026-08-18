#include <iostream>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int count = 0 ;
    
    for (int i = 1 ; i<=n ; i= i*10 ) {
        for(int j = 1 ; j <= 9 ; j++) {
            if(j * i <= n) {
                count++ ;
            }
        }
    }
    cout << count << "
" ;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}