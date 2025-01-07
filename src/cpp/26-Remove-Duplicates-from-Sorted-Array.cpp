class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int check{nums[0]}, cnt{1}, num{1};
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] != check)
            {
                check = nums[i];
                nums[num++] = check;  
                ++cnt;
            }
        }
        return cnt;
    }
};