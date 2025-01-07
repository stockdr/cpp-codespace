class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt{};
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == val)
            {
                nums[i] = 50;
                ++cnt;
            }
        }
        sort(nums.begin(), nums.end());
        return nums.size() - cnt;
    }
};