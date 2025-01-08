class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        map<int, int> map;
        for (int i = 0; i < nums.size(); ++i)
        {
            map[nums[i]] = i;
        }
        int value{};
        for (int i = 0; i < operations.size(); ++i)
        {
            value = map[operations[i][0]];
            map.erase(operations[i][0]);
            map[operations[i][1]] = value;
        }
        for (const auto& i : map)
        {
            nums[i.second] = i.first;
        }
        return nums;
    }
};