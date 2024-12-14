#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define endl '\n'
const int MOD = 1000000007;

signed main(){
    int n;
    cin>>n;

    priority_queue<int>maxheap;//forsmallerhalf
    priority_queue<int,vector<int>,greater<int>>minheap;//formaxhalf

    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        //insert
        if(maxheap.empty() || k<=maxheap.top()){
            maxheap.push(k);
        }
        else{
            minheap.push(k);
        }
        // we need max diff is 1;
        if(maxheap.size()>minheap.size()+1){
            minheap.push(maxheap.top());
            maxheap.pop();
        }
        else if(maxheap.size()<minheap.size()){
            maxheap.push(minheap.top());
            minheap.pop();
        }
        //calculate
        int median;
        if(maxheap.size()==minheap.size()){
            median=(maxheap.top()+minheap.top())/2;
        }
        else{
            median=maxheap.top();
        }
        cout<<median<<" ";
    }
    return 0; 
}




