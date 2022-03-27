//https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>p;
        
        int n=mat.size();
        int m=mat[0].size();
        
        for(int i=0;i<n;i++)
        { int count=0;
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1)
                    count++;
            }
        p.push_back(make_pair(count,i));
        }
        
        sort(p.begin(),p.end());
        vector<int>ans;
        int i=0;
        while(k--)
        {
            ans.push_back(p[i].second);
            i++;
        }
        return ans;
    }
};
