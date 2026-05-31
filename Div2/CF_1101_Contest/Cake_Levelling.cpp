#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    ll prefix_sum = 0;
    ll max_possible_height = a[0]; // Start with a very large number or just a[0]
    max_possible_height = 1e18; // A safe upper bound constraint
    
    for (int i = 0; i < n; i++) {
        prefix_sum += a[i];
        
        // The maximum height this specific prefix can support on its own
        ll current_limit = prefix_sum / (i + 1);
        
        // The overall height cannot exceed any of the previous limits
        max_possible_height = min(max_possible_height, current_limit);
        
        cout << max_possible_height << " ";
    }
    cout << "\n";
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
