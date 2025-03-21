

// https://leetcode.com/problems/sort-array-by-increasing-frequency/description/

class Solution {
    public:
        vector<int> frequencySort(vector<int>& nums) {
            map<int,int>mp;  // storing fequency of elements of nums
            for(int i=0;i<nums.size();i++)
            {
                mp[nums[i]]++;
            }
            // for(auto it:mp)
            // {
            //     cout<<it.first<<" "<<it.second<<endl;
            // }
            map<int,vector<int>>mp1; // storing frequency as key
            for(auto it:mp)
            {
                mp1[it.second].push_back(it.first);
            }
            vector<int>res;
              for(auto &it:mp1)
            {
                // cout<<it.first<<" -> ";
                sort(it.second.rbegin(),it.second.rend());
                // for(auto p:it.second)
                // {
                //     cout<<p<<" ";
                // }
                // cout<<endl;
                for(int i=0;i<it.second.size();i++)
                {
                        for(int j=0;j<it.first;j++)
                        {
                            res.push_back(it.second[i]);
                        }
                }
            }
            return res;
        }
    };