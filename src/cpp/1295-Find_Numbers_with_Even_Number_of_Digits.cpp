class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt{};
        for (auto i : nums)
        {
            if (i/100000)
                ++cnt;
            else if ((i/1000) >= 1 && (i/1000) < 10)
                ++cnt;
            else if((i/10) >= 1 && (i/10) < 10)
                ++cnt;
        }
        return cnt;
    }
};