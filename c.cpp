#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, false, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define mod 1000000007
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        // write code here
        int n;
        cin >> n;
        vl a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll sum = 0;
        ll sum_odd = 0;
        ll sum_even = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (i % 2)
            {
                sum_even += a[i];
            }
            else
            {
                sum_odd += a[i];
            }
        }
        if (sum % n != 0)
        {
            cout << "NO\n";
            continue;
        }
        ll count_odd = (n + 1) / 2;
        ll count_even = (n) / 2;
        ll target = sum / n;
        if (sum_odd == target * count_odd && sum_even == target * count_even)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}