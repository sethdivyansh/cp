#include <bits/stdc++.h>
using namespace std;

//------------------------------------------------------------------------
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define output(a, n) for (int i = 0; i < n; i++) cout << a[i] << " "
#define f(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
//------------------------------------------------------------------------
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}
//------------------------------------------------------------------------
bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
//------------------------------------------------------------------------
int power(int a, int b) {
 int res = 1;
 while(b>0){
  if(b&1)res*=a;
  a*=a;
  b >>= 1;
 }
 return res;
}

//------------------------------------------------------------------------
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
       int n,k;
       cin>>n>>k;
       int a[n];
       input(a,n);
       sort(a,a+n);
       int sig = 0;
       int alice = 0;
       int bob = 0;
       for(int i = n-1; i>= 0; i-=2){
        alice += (a[i]);
       }
       for(int i = n-2; i>= 0; i-=2){
        bob += (a[i]);
       }
       for(int i = n-1; i>= 1; i-=2){
        sig += (a[i] - a[i-1]);
       }
       sig = min(sig, k);
       cout<<alice - bob - sig<<endl;
    }
}