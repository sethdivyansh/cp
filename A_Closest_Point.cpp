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

#define Divyansh (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL))
#define endl "\n"
#define loop(i, a, n) for (int i = a; i < n; i++)
#define revLoop(i, n, a) for (int i = n - 1; i >= a; i--)
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
#define srtD(x) sort(x.begin(), x.end(), greater<int>())
#define srtC(a, b) sort(a.begin(), a.end(), b)
#define rall(v) v.rbegin(), v.rend()
#define in(v) loop(i, 0, n) cin >> v[i];

// #pragma GCC target("popcnt")

typedef long long ll;
typedef vector<int> vi;

const int M = 1e9 + 7;
const int N = 2e5 + 10;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    loop(i, 0, n)
    {
        cin >> v[i];
    }
    if (n > 2)
    {
        cout << "NO" << endl;
        return;
    }

    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }

    if (n == 2)
    {
        if (abs(v[0] - v[1]) != 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    Divyansh;
    int t = 1;
    cin >> t;
    while (t--)
    {
        // memset(dp,-1,sizeof(dp));
        solve();
    }
}
