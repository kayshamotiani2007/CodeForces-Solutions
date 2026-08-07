#include <iostream>
#include <string>
using namespace std;
 
// Helper function to check if s is a substring of x
bool check(const string& x, const string& s) {
    if (x.size() < s.size()) return false;
    
    // Sliding window substring check
    for (int i = 0; i <= (int)x.size() - (int)s.size(); i++) {
        if (x.substr(i, s.size()) == s) {
            return true;
        }
    }
    return false;
}
 
void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
 
    // Build x after 0 to 5 operations
    string x0 = x;
    string x1 = x0 + x0;
    string x2 = x1 + x1;
    string x3 = x2 + x2;
    string x4 = x3 + x3;
    string x5 = x4 + x4;
 
    // Check minimum operations needed
    if (check(x0, s)) cout << 0 << "
";
    else if (check(x1, s)) cout << 1 << "
";
    else if (check(x2, s)) cout << 2 << "
";
    else if (check(x3, s)) cout << 3 << "
";
    else if (check(x4, s)) cout << 4 << "
";
    else if (check(x5, s)) cout << 5 << "
";
    else cout << -1 << "
";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}