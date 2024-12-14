#include <iostream>
#include <algorithm> // For std::max and std::min
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l, r, L, R;
        cin >> l >> r >> L >> R;

        int overlap_start = max(l, L);
        int overlap_end = min(r, R);

        int lap = overlap_end - overlap_start;

        int ans = 0;
        int cnt = 0;

        if (l != L)
            cnt++;
        if (r != R)
            cnt++;

        ans += cnt;

        if (lap < 0)
            ans = 0;

        ans += max(0, lap);
        ans = max(1, ans);
        cout << ans << endl;
    }

    return 0;
}
