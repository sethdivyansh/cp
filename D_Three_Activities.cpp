#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> get_best3(const vector<int> &a)
{
    int mx1 = -1, mx2 = -1, mx3 = -1;
    for (int i = 0; i < a.size(); ++i)
    {
        if (mx1 == -1 || a[i] > a[mx1])
        {
            mx3 = mx2;
            mx2 = mx1;
            mx1 = i;
        }
        else if (mx2 == -1 || a[i] > a[mx2])
        {
            mx3 = mx2;
            mx2 = i;
        }
        else if (mx3 == -1 || a[i] > a[mx3])
        {
            mx3 = i;
        }
    }
    return {mx1, mx2, mx3};
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> c[i];
        }

        int ans = 0;
        auto best_a = get_best3(a);
        auto best_b = get_best3(b);
        auto best_c = get_best3(c);
        for (int x : best_a)
        {
            for (int y : best_b)
            {
                for (int z : best_c)
                {
                    if (x != y && x != z && y != z)
                    {
                        ans = max(ans, a[x] + b[y] + c[z]);
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}