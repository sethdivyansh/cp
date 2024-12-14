#include<bits/stdc++.h>
using namespace std;
#define seth (ios_base::sync_with_stdio(false),cin.tie(NULL))

const int N = 1e6+10;
vector<bool> isPrime(N,1);
int prime[N];

bool checkSqr(long long int x){
    long long sr = sqrt(x);

    if(sr * sr == x){
        if(prime[sr])
            return true;
        else
            return false;
    }
    else return false;
}

void solve(){
    for(int i = 2; i<N;i++){
        if(isPrime[i]){
            prime[i]++;
            for(int j = i; j<N; j+=i){
                isPrime[j] = false;
            }
        }
    }

    int q;
    cin >> q;
    while(q--){
        long long int x;
        cin >> x;
        if(x == 1) cout << "NO" << endl;
        else if(checkSqr(x)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}


int main(){
    seth;
    solve();
}