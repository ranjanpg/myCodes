int maxSubArray(vector<int>& nums) {
        int max_sum=INT_MIN;
        int curr_sum=0;
        int start=0;
        for(int i=0;i<nums.size();i++){
            curr_sum+=nums[i];
            if(curr_sum>max_sum){
                max_sum=curr_sum;
            }
            while(curr_sum<0 && start<=i){
                curr_sum-=nums[start];
                start++;
            }
        }
    return max_sum;}
