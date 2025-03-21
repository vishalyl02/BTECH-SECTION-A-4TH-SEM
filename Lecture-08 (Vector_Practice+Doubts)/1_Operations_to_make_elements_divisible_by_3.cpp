class Solution {
    public:
        int minimumOperations(vector<int>& nums) {
    
    
         int count=0;
    
         for(int i=0;i<nums.size();i++)
         {
            int rem=nums[i]%3;
            if(rem==2)
          {  nums[i]=nums[i]+1;
            count++;
           }
           else if(rem==1)
           {
            nums[i]=nums[i]-1;
            count++;
           }
         }
           return count;
         }
    };