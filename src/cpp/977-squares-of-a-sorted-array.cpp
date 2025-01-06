class Solution {
    // 25 9 4 1
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int i= 0; i < nums.size(); ++i)
        {
            nums[i] = pow(nums[i], 2);
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};