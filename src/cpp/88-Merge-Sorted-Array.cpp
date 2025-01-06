class Solution {
public:
    // 1 2 3 0 0 0 2 5 6
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i < n; ++i)
        {
            nums1[m] = nums2[i];
            ++m;
        }
        sort(nums1.begin(), nums1.end());
    }
};