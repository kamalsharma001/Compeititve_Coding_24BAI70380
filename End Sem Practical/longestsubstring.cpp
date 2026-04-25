class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0)    return 0;
        int left=0;
        int right=0;
        unordered_map<char,int> frq;
        int maxlen=INT_MIN;
        while(right<n){
            frq[s[right]]++;

            while(frq[s[right]]>1){
                frq[s[left]]--;
                left++;
            }

            right++;

            maxlen=max(maxlen,right-left);
        }
        return maxlen;
    }
};
