#include <bits/stdc++.h>
using namespace std;
vector<int> max2(vector<int>& v){
    int a=INT_MIN;
    int b=INT_MIN;
    for(int i=0;i<nums.size();i++){
	if(nums[i]>min(a,b)){
       	 if(a<b){
           a=b;
	   b=nums[i];
         }
         else{
           b=a;
           a=nums[i];
         }
       }
     }
 return {a,b};
}
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
