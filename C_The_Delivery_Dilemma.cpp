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
#define loop(i, a, n) for (long long i = a; i < n; i++)
#define revLoop(i, n, a) for (long long i = n - 1; i >= a; i--)
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
#define srtC(a, b) sort(a.begin(), a.end(), b)
#define rall(v) v.rbegin(), v.rend()
#define in(v) loop(i, 0, n) cin >> v[i];
#define sortD(x) sort(rall(x))

// #pragma GCC target("popcnt")

typedef long long ll;
typedef vector<ll> vl;

const int M = 1e9 + 7;
const int N = 2e5 + 10;

string decimalToBinary(ll decimal_number)
{
    bitset<64> binary(decimal_number);
    return binary.to_string();
}

ll binaryToDecimal(string &binary_string)
{
    bitset<64> binary(binary_string);
    return binary.to_ullong();
}

bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}

void solve()
{
    int n;
    cin >> n;

    vector<pair<ll, ll>> b_a(n);
    vl t(n);

    loop(i, 0, n)
    {
        cin >> b_a[i].second;
    }
    loop(i, 0, n)
    {
        cin >> b_a[i].first;
    }

    sort(all(b_a), cmp);

    t[0] = b_a[0].first;
    loop(i, 1, n)
    {
        t[i] = t[i - 1] + b_a[i].first;
    }

    ll l = 1, r = 1e15, ans = 0;

    loop(i, 0, 80)
    {
        ll mid = (l + r) / 2;
        // cout << "Mid " << mid << endl;

        ll idx = lower_bound(all(t), mid) - t.begin();

        if (t[idx] == mid)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            ll x = 0;
            if (idx < n)
            {
                x = min(b_a[n - 1].second, t[idx]);
                // cout << "HERE: " << x << endl;
                // cout << "Ind " << idx << endl;
            }
            else
            {
                r = mid - 1;
            }

            if (x <= mid)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    // cout << endl;
    cout << ans << endl;
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
