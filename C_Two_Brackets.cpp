#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int p = 0, b = 0;
    int ans = 0;
    for (char c : s)
    {
        if (c == '(')
            p++;
        else if (c == ')')
        {
            if (p)
            {
                ans++;
                p--;
            }
        }
        else if (c == '[')
            b++;
        else
        {
            if (b)
            {
                b--;
                ans++;
            }
        }
    }
    cout << ans << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}
