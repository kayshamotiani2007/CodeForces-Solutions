#include <bits/stdc++.h>
using namespace std;
 
void solve() { 
    
	int n;
	cin >> n;
	string s;
	cin >> s;
	
	bool conti_three = false;
	int total_empty = 0;
	
	
	for ( int i=0 ; i<n ; i++) {
	    
	    if(i + 2 < n && s[i] == '.' && s[i+1] == '.' && s[i+2] == '.' ) {
	        
	        conti_three = true;
	        
	    }   
	
	
	    if (s[i] == '.') {
	        total_empty++;	    
	    }
	   
	}	  
 
 
     if (conti_three) {
	    cout << 2 << "
" ;
     }  
	    
    else {
	    cout << total_empty << "
";
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
	
	
 