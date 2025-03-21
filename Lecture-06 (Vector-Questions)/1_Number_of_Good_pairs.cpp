class Solution {
    public:
        int numIdenticalPairs(vector<int>& nums) {
            int sz=nums.size();  // Size of vector
    
            int count=0;  // variables stores good pairs count
    
            for(int i=0;i<sz;i++)
            {
                for(int j=i+1;j<sz;j++)
                {
                    if(nums[i]==nums[j])
                    count++;
                }
            }
            return count;
    
        }
    };