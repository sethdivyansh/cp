//
//  _ _ _ _ _    _ _ _ _ _   _ _ _ _ _    _     _
// /   _ _ _ |  |  _ _ _ _| |_ _ _ _ _|  | |   | |
// |  | _ _ _   | | _ _ _       | |      | |_ _| |
//  \ _ _ _   \ |   _ _ _|      | |      |  _ _  |
//   _ _ _ _| | | | _ _ __      | |	 | |   | |
//  |_ _ _ _  / |_ _ _ _ _|     |_|      |_|   |_|
//

#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl "\n"
#define loop(i, a, n) for (int i = 0; i < n; i++)
#define mp make_pair
#define pb push_back

// #pragma GCC target("popcnt")

const int M = 1e9 + 7;
const int N = 2e5 + 10;

typedef long long ll;

bool check(int x, int k, int n)
{
    int ans = 0;

    while (x > 0)
    {
        ans += x;
        x /= k;
    }
    return ans >= n;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    int l = 0, r = n;
    ll mid = 0;
    if (n <= k)
    {
        cout << n << endl;
        return;
    }
    while (r - l > 1)
    {
        mid = (l + r) / 2;
        if (check(mid, k, n))
        {
            r = mid;
        }
        else
            l = mid;
    }
    cout << r << endl;
}

int main()
{
    Seth;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        // memset(dp,-1,sizeof(dp));
        solve();
    }
}