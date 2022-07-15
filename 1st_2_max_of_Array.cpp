#include <bits/stdc++.h>
using namespace std;
vector<int> max2(vector<int>& v){
    int a=INT_MAX;
	int b=INT_MIN;
	for(int i=0;i<10;i++){
	    if(v[i]>min(a,b)){
	        a=b;
	        b=v[i];
	    }
	}
return {a,b};}
int main() {
	vector<int> v;
	int i=1;
	while(i<11){
	    v.push_back(i);
	    i++;
	}
	vector<int> ans(2,0);
	ans=max2(v);
	cout<<ans.size()<<" "<<ans[0]<<" "<<ans[1];
	return 0;
}