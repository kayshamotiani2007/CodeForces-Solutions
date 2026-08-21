#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
 
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
 
    int odd_count = 0;
    for (auto const& [ch, count] : freq) {
        if (count % 2 != 0) {
            odd_count++;
        }
    }
 
    if (k >= odd_count - 1) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}