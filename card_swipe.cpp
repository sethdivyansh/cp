#include <bits/stdc++.h>
using namespace std;

const int N = 1e7;


int cnt = 0;
int ans = 0;
int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        vector<int> hsh(N,1);
        cnt = 0;
        ans = 0;
        int n;
        cin >> n;
        int p;
        while(n--){
            cin >> p;
            if(hsh[p]){
                cnt++;
                hsh[p] = false;
                ans = max(ans, cnt);
                cout << cnt << endl;
            }
            else if(!hsh[p]){
                cnt--;
                ans = max(ans, cnt);
                cout << cnt << endl;
                
            }
        }
        cout << endl;
        // cout << ans << endl;
    }
}
