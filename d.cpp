#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    ll k;
    cin >> n >> k;

    // Optimal strategy is to place the smallest elements at the beginning
    // This maximizes the minimum elements in every possible subarray
    vector<int> optimal_perm(n);
    
    // Fill the first part with smallest numbers
    int small_part = min(n, 20);  // Optimize small part placement
    for (int i = 0; i < small_part; i++) {
        optimal_perm[i] = i + 1;
    }

    // Fill the rest with larger numbers
    for (int i = small_part; i < n; i++) {
        optimal_perm[i] = i + 1;
    }

    // Count total number of maximum sum permutations
    ll total_max_perms = 1;
    for (int i = small_part; i < n; i++) {
        total_max_perms *= (n - i);
    }

    // Check if k exceeds total maximum sum permutations
    if (k > total_max_perms) {
        cout << "-1\n";
        return;
    }

    // Generate the k-th permutation
    k--;  // 0-based indexing
    for (int i = small_part; i < n; i++) {
        int choices = n - i;
        int pos = k / (total_max_perms / choices);
        total_max_perms /= choices;

        // Swap to get the correct permutation
        swap(optimal_perm[i], optimal_perm[i + pos]);
        
        k %= (total_max_perms * choices);
    }

    // Output the permutation
    for (int x : optimal_perm) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}