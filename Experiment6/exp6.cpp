class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int start=0;
        int end=0;
        int n=nums.size();
        long long maxsum=INT_MIN;
        long long currsum=0;
        unordered_map<int,int> frq;
        for(int i=0;i<k;i++){
            currsum+=nums[end];
            frq[nums[end]]++;
            end++;
            if(frq.size()==k){
            maxsum=max(maxsum,currsum);}
        }
        while(end<n){
            if(frq[nums[start]]==1){
                frq.erase(nums[start]);
            }
            else{
            frq[nums[start]]--;}
            currsum-=nums[start++];
            frq[nums[end]]++;
            currsum+=nums[end++];
            if(frq.size()==k){
                maxsum=max(currsum,maxsum);
            }
        }
        if(maxsum==INT_MIN) return 0;
        return maxsum;
    }
};
