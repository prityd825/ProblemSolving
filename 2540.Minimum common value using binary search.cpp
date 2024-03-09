class Solution {
public:
    int binarySearch(vector<int>& arr, int target) {
        int left = 0, right = arr.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return -1;
    }

    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        if (n < m) {
            for (int i = 0; i < n; ++i) {
                int index = binarySearch(nums2, nums1[i]);
                if (index != -1) {
                    return nums1[i];
                }
            }
        } else {
            for (int i = 0; i < m; ++i) {
                int index = binarySearch(nums1, nums2[i]);
                if (index != -1) {
                    return nums2[i];
                }
            }
        }

        return -1;
    }
};
