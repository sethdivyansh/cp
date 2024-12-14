#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;

	stack <int> st;
	vector<pair<int,int>> gt;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int num;
		cin >> num;
		v.push_back(num);
		if(st.empty()){
			st.push(num);
		}
		else{
			int top = 0;
			while(1){
				if(!st.empty()){
					top = st.top();
				}
				else{
					st.push(num);
					break;
				}

				if(top > num){
					st.push(num);
					break;
				}
				else{
					gt.push_back(make_pair(top,num));
					st.pop();
				}

			}
		}
	}
	while(!st.empty()){
		int top = st.top();
		gt.push_back(make_pair(top,-1));
		st.pop();
	}

	for(int i = 0; i<gt.size(); i++){
		cout << gt[i].first << " " << gt[i].second << endl;
	}

}




// top = st.top();
// 			if (top < num){
// 				gt.insert({top,num});
// 				st.pop();
// 				st.push(num);
// 			}
// 			else{
// 				gt.push(num);
// 			}




