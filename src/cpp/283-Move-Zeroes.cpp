class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroIdx{};
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 0) {
                zeroIdx = i;
                i = nums.size();
            }
            if (i == (nums.size() - 1)) return;
        }
        for (int i = zeroIdx + 1; i < nums.size(); ++i)
        {
            
            if (nums[i] != 0)
            {
                cout << nums[zeroIdx] << " " << nums[i] << endl;
                nums[zeroIdx++] = nums[i];
            }
        }
        for (int i = zeroIdx; i < nums.size(); ++i)
        {
            nums[i] = 0;
        }
    }
};