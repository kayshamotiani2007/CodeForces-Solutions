#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	
    int score=0;
    
    for (int r=0 ; r<10 ; ++r) {
        string row;
        cin >> row;
        
        for (int c=0 ; c<10 ; ++c) {
            if (row[c] == 'X') {
                int points = min({r+1 , 10-r , c+1 , 10-c});
                score  += points;
            }
            
        }
    }
    
    cout << score << "
" ;
	
    
    
	    
	
	
 
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
 
return 0;
}