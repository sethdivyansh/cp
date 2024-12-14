#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

// Function to compute GCD
int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

// Build segment tree
void buildSegmentTree(vector<int>& segTree, vector<int>& diff, int node, int start, int end) {
    if (start == end) {
        segTree[node] = diff[start];
    } else {
        int mid = (start + end) / 2;
        int leftChild = 2 * node + 1;
        int rightChild = 2 * node + 2;

        buildSegmentTree(segTree, diff, leftChild, start, mid);
        buildSegmentTree(segTree, diff, rightChild, mid + 1, end);

        segTree[node] = gcd(segTree[leftChild], segTree[rightChild]);
    }
}

// Query segment tree
int querySegmentTree(vector<int>& segTree, int node, int start, int end, int l, int r) {
    if (r < start || l > end) {
        return 0; // Neutral element for GCD
    }
    if (l <= start && end <= r) {
        return segTree[node];
    }
    int mid = (start + end) / 2;
    int leftChild = 2 * node + 1;
    int rightChild = 2 * node + 2;

    int leftGCD = querySegmentTree(segTree, leftChild, start, mid, l, r);
    int rightGCD = querySegmentTree(segTree, rightChild, mid + 1, end, l, r);

    return gcd(leftGCD, rightGCD);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (n == 1) {
            // Special case: Single element, all queries return 0
            vector<int> queries(q);
            for (int i = 0; i < q; ++i) {
                int l, r;
                cin >> l >> r;
                cout << "0\n";
            }
            continue;
        }

        // Compute the difference array
        vector<int> diff(n - 1);
        for (int i = 1; i < n; ++i) {
            diff[i - 1] = abs(a[i] - a[i - 1]);
        }

        // Build segment tree for GCD
        int segTreeSize = 4 * (n - 1);
        vector<int> segTree(segTreeSize, 0);
        buildSegmentTree(segTree, diff, 0, 0, n - 2);

        // Answer queries
        for (int i = 0; i < q; ++i) {
            int l, r;
            cin >> l >> r;
            --l; --r; // Convert to 0-based index

            if (l == r) {
                cout << "0" << " "; // Single element range
            } else {
                int result = querySegmentTree(segTree, 0, 0, n - 2, l, r - 1);
                cout << result << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
