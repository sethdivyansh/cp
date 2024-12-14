#include<bits/stdc++.h>
using namespace std;



map<long long, vector<int>> m_v;

const int N = 1e6;
int spf[N+1];

// map<int, int> x_n;
vector<int> x(N);
// vector<int> v, done(N,0);
set<int> factors;

void createSieve(){
  for(int i = 1; i <= N; i++){
    spf[i] = i;
  }

  for(int i = 2; i * i <= N; i++){
    if(spf[i] == i){
      for(int j = i*i; j<= N; j+=i){
        if(spf[j] == j){
          spf[j] = i;
        }
      }
    }
  }
}

void computeN(){
  int l = 1, r = 1e6+1;
  

  for(int i = l; i < r; i++){
    int n = i;
    while(n!=1){
      // if(done[spf[n]] == 0){
      //   v.push_back(spf[n]);
      //   done[spf[n]] = 1;
      // }
      factors.insert(spf[i]);
      n /= spf[n];
    }
    long long xr = 0;
    cout << i << ": ";
    for(int j : factors){
      xr ^= j;
      cout << j << " ";
    }
    cout << endl;

    // cout << xr  << ": " << i << endl;
    // cout << endl;
    // x_n[n] = xr;
    m_v[xr].push_back(i);
    x[i] = xr;
    // v.clear(), done.clear();
    factors.clear();
  }
}


int main(){
  createSieve();
  computeN();
  // int t;
  // cin >> t;

  // cout << x[10] << endl;

  // auto m = m_v[7];

  // for(auto i : m){
  //   cout << i << endl;
  // }
  
  // for(auto it = m_v.begin();it != m_v.end(); it++){
  //   cout << (*it).first << ": ";
  //   for(auto i: (*it).second){
  //     cout << i << " ";
  //   }
  //   cout << endl;
  // }

  // while(t--){
  //   int n, l ,r;
  //   cin >> n >> l >> r;

    // cout << count(x.begin()+l, x.begin()+r, n) << endl;



    // vector<int> v, done(N,0);

    // while(n!=1){
    //   if(spf[n] == 0){
    //     v.pb(spf[n]);
    //     spf[n] = 1;
    //   }
    //   n /= spf[n];
    // }
    // ll xr = 0;
    // for(int i : v){
    //   xr ^= i;
    // }
    // if(xr == n)
  // }
}