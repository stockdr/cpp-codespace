class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt{}, maxCnt{};
        for (auto i : nums)
        {
            if (i == 1)
                ++cnt;
            else
            {
                if (maxCnt < cnt)
                    maxCnt = cnt;
                cnt = 0;
            }
        }
        if (maxCnt < cnt)
            maxCnt = cnt;
        return maxCnt;
    }
};