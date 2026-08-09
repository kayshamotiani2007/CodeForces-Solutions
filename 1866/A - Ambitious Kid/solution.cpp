#include <iostream>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    int min_ops = 1e9; // Initialize with a large number
 
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        min_ops = min(min_ops, abs(a));
    }
 
    cout << min_ops << "
";
 
    return 0;
}