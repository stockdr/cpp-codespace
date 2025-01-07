class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> arrayedHeights(heights);
        sort(arrayedHeights.begin(), arrayedHeights.end());
        
        int cnt{};
        for (int i = 0; i < heights.size(); ++i)
        {
            if (arrayedHeights[i] != heights[i])
            {
                ++cnt;
            }
        }
        
        return cnt;
    }
};