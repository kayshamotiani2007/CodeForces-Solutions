#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    int total_twos = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 2) {
            total_twos++;
        }
    }
 
    // If total count of 2s is odd, it's impossible to split equally
    if (total_twos % 2 != 0) {
        cout << "-1
";
        return;
    }
 
    // If there are no 2s at all, k = 1 splits into two sets with zero 2s
    if (total_twos == 0) {
        cout << "1
";
        return;
    }
 
    // Find index k where we reach exactly half of the 2s
    int target_twos = total_twos / 2;
    int current_twos = 0;
 
    for (int k = 1; k < n; k++) {
        if (a[k - 1] == 2) {
            current_twos++;
        }
        if (current_twos == target_twos) {
            cout << k << "
";
            return;
        }
    }
 
    cout << "-1
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