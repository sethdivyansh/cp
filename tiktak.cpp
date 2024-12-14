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

typedef long long ll;

const int M = 1e9 + 7;
const int N = 2e5 + 10;

void solve()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    deque<string> S(n), T(n);

    for (int i = 0; i < n; ++i)
    {
        S[i] = s.substr(i) + s.substr(0, i);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        T[i] = t.substr(i) + t.substr(0, i);
    }

    sort(all(S));
    sort(all(T));

    ll count = 0;

    int i = 0, j = 0;

    for (i = 0; i < n && j < n;)
    {
        if (S[i] <= T[j])
        {
            count += n - j;
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << count << endl;
}

int main()
{
    Divyansh;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        //memset(dp,-1,sizeof(dp));
        solve();
    }
}
