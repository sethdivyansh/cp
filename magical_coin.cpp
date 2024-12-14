#include <bits/stdc++.h>
using namespace std;

#define int  long long

const int N=1000000007;

void as_fraction(double number,int &numerator, int &denominator, int cycles = 10, double precision = 5e-4){
    int sign  = number > 0 ? 1 : -1;
    number = number * sign;
    double new_number,whole_part;
    double decimal_part =  number - (int)number;
    int counter = 0;
    
    valarray<double> vec_1{double((int) number), 1}, vec_2{1,0}, temporary;
    
    while(decimal_part > precision & counter < cycles){
        new_number = 1 / decimal_part;
        whole_part = (int) new_number;
        
        temporary = vec_1;
        vec_1 = whole_part * vec_1 + vec_2;
        vec_2 = temporary;
        
        decimal_part = new_number - whole_part;
        counter += 1;
    }
    
    numerator=vec_1[0];
    denominator=vec_1[1];

}
long double func(int n, int k, long double a, long double &x){

    if(k>n) return 0;
    if(n==1 && k==1) return a;
    if(n==1 && k==0) return (1-a);
    if(n==k) return a*func(n-1,k-1,a-x,x);
    if(k==0) return (1-a)*func(n-1,k,a+x,x);
    else return a*func(n-1,k-1,a-x,x)+ (1-a)*func(n-1,k,a+x,x);


}

int modpow(int x, int n, int m) {
    if (n == 0) return 1%m;
    long long u = modpow(x,n/2,m);
    u = (u*u)%m;
    if (n%2 == 1) u = (u*x)%m;
    return u;
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
        long double a,x;
        cin>>a>>x;
        x/=1000;
        a/=1000;
        int n,k;
        cin>>n>>k;
        long double prob=func(n,k,a,x);
        int numerator,denominator;
        as_fraction(prob,numerator,denominator);
        cout<<(numerator*1ll*modpow(denominator,N-2,N))%N;

    return 0;
}