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

void solve()
{
    ll k, n, a, b;
    cin >> k >> n >> a >> b;

    ll lo = 0, hi = n, turns = -1;

    loop(i, 0, 80)
    {
        ll mid = (lo + hi) / 2;
        if ((mid * a + b * (n - mid)) < k)
        {
            turns = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }

    cout << turns << endl;
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