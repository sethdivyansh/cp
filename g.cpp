#include<bits/stdc++.h>
using namespace std;
// #pragma GCC target("popcnt")
#define f(i,a,n) for(int i = a; i<=n;i++)
#define rev(i,n,a) for(int i = n; i >= a; i--)
#define pb push_back
#define in(a) f(i,0,a.size()-1)cin>>a[i];
#define Hello (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef map<int, int> mii;
typedef map<int, vi> mivi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
int main(){
	Hello;  
	int t=1;
	//cin>>t;
	while(t--){
	  int n;
	  cin>>n;
	  vi a(n);
	  in(a);
	  sort(a.begin(),a.end());
	  mii m;
	  vi v;
	  f(i,0,n-1){
	  	if(m[a[i]]==0)
	  		v.pb(a[i]);
	  	m[a[i]]=1;
	  }
	  n=v.size();
	  if(v[0]!=1 || n==1)
	  	cout<<"Alicius"<<endl;
	  else{
	  	int c=1;
	  	f(i,1,n-1){
	  		if(v[i]-v[i-1]==1){
	  			c++;
	  		}
	  		else
	  			break;
	  	}
	  	if(c==n){
	  		if(c&1){
	  			cout<<"Alicius"<<endl;
	  		}
	  		else{
	  			cout<<"Bobius"<<endl;
	  		}
	  	}
	  	else{
	  	if(c&1){
	  		cout<<"Bobius"<<endl;
	  	}
	  	else
	  		cout<<"Alicius"<<endl;
	  }
	  }
	}
}