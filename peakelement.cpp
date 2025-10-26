class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=0,n=nums.size(),k;
        for(int i=0;i<nums.size();i++)
        {
            if((i==0 || nums[i-1] < nums[i]) &&  ((i==n-1) || nums[i] > nums[i+1]))
            {
                return i;
            }
        }
        return i;
        
    }
};
