class Solution {
public:
    vector<vector<int>> result;
    vector<int> current;
    
    void backtrack(vector<int>& nums, int target, int start) {
        if (target == 0) {
            result.push_back(current);
            return;
        }
        
        for (int i=start;i<(int)nums.size(); i++) {
            if (i>start && nums[i]==nums[i-1]) 
            {
                continue;
            }
            if (nums[i]>target)
             {
                break;
            }
            current.push_back(nums[i]);
            backtrack(nums,target - nums[i],i+1);
            current.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        backtrack(nums, target, 0);
        return result;
    }
};
