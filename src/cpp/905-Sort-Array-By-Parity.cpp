class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if (nums.size() == 1) return nums;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] % 2)
            {
                for (int j = i + 1; j < nums.size(); ++j)
                {
                    if (nums[j] % 2 == 0)
                    {
                        swap(nums[i], nums[j]);
                        j = nums.size();
                    }
                }
            }
        }
        return nums;
    }
};