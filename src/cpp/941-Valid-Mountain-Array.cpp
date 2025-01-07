class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() <= 2) return false;
        int max{arr[0]};
        int maxIdx{};
        int cnt{};
        for (int i = 1; i < arr.size(); ++i)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                maxIdx = i;
            }
        }
        for (int i = 0; i < maxIdx; ++i) {
            if (arr[i] >= arr[i+1])
                return false;
            else ++cnt;
        }
        if (cnt == 0) return false;
        cnt = 0;
        
        for (int i = maxIdx; i < arr.size() - 1; ++i) {
            if (arr[i] <= arr[i+1])
                return false;
            else ++cnt;
        }
        if (cnt == 0) return false;
        cnt = 0;
        return true;
    }
};