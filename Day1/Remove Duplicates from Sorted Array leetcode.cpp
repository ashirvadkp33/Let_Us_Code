//https://leetcode.com/problems/remove-duplicates-from-sorted-array/

int removeDuplicates(vector<int>& nums) {
        
        int k=1,j=1;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[i-1])
            {
                k++;
                nums[j]=nums[i];
                j++;
            }
            else 
                continue;
        }
        return k;
    }
