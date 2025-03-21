// https://leetcode.com/problems/matrix-diagonal-sum/description/

class Solution {
    public:
        int diagonalSum(vector<vector<int>>& mat) {
            int sum=0;
            int n=mat.size(); // no of rows
            for(int i=0;i<n;i++)
            {   for(int j=0;j<mat[i].size();j++)
                {if(i==j)// Diagonal  D1 
                    {
                        sum+=mat[i][j];
                    }
                    if(i+j==n-1)  // Diagonal D2
                    {
                        sum+=mat[i][j];
                    }}}
            if(n%2==1)
            {
                sum-=mat[n/2][n/2];
            }
            return sum;
        }
    };


    