#include<bits/stdc++.h>
using namespace std;;
 
int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long int n,i,cnt=0;
        cin>>n;
        vector<long long int> arr(n);
        
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int min,min2;
        min=INT_MAX;
        min2=INT_MAX;
        for(i=0;i<n;i++){
            if(min2>min){
                swap(min,min2);
            }
            if(arr[i]<=min2){
                min2=arr[i];
            }
            else if(arr[i]<=min){
                min=arr[i];
            }
            else{
                cnt++;
                min2=arr[i];
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}