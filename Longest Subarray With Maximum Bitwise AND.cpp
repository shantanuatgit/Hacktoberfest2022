class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int m, count=0, res=0;
        m = *max_element(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size(); ++i)
        {
            if(nums[i] == m)
            {
                count+=1;
            }
            else{
                count=0;
            }
            
            res = max(res, count);
            
        }
        return res;
    }
};
