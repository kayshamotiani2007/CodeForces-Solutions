#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int left = 0;
    int right = n - 1;
 
    while (left < right && s[left] != s[right]) {
        left++;
        right--;
    }
 
    cout << (right - left + 1) << "
";
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