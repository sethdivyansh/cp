#include <bits/stdc++.h>
using namespace std;

#define Divyansh (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define endl "\n"
#define loop(i,a,n) for(int i = a; i<n;i++)
#define revLoop(i,n,a) for(int i = n-1; i >= a; i--)
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
#define srtD(x) sort(x.begin(), x.end(), greater<int>())
#define srtC(a,b) sort(a.begin(), a.end(), b)
#define rall(v) v.rbegin(), v.rend()

typedef long long ll;

const int M = 1e9+7;
const int N = 2e5+10;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    loop(i, 0, n) {
        cin >> v[i];
    }

    if (n <= 1) {
        cout << 0 << endl;
        return;
    }

    int num = v[0];
    int numDigits = 0;
    while (num > 0) {
        num /= 10;
        numDigits++;
    }

    vector<unordered_map<int, int>> digitFreq(numDigits);

    for (int num : v) {
        int temp = num;
        for (int pos = 0; pos < numDigits; pos++) {
            digitFreq[pos][temp % 10]++;
            temp /= 10;
        }
    }

    ll ans = 0;

    loop(pos, 0, numDigits) {
        ll diff = 0;

        for (auto entry : digitFreq[pos]) {
            int freq = entry.second;
            diff += freq * (n - freq);
        }

        ans += diff / 2;
    }

    cout << ans << endl;
}

int main() {
    Divyansh;
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
