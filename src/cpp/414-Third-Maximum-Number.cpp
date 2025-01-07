class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int third{nums[(int)(nums.size()) -1]};
        int cnt{};
        for (int i = nums.size() - 1; i >= 0; --i)
        {
            if (third != nums[i])
            {
                third = nums[i];
                ++cnt;
                if (cnt == 2)
                    i = 0;
            }
        }
        if (cnt == 1) return nums[nums.size() - 1];
        return third;
        
    }
};