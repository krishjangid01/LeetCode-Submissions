
class Solution {
public:
    bool isValid(vector<int>& arr, int n, int m, int maxAllowedSum) {
        int groups = 1;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            if (sum + arr[i] <= maxAllowedSum) {
                sum += arr[i];
            } else {
                groups++;
                sum = arr[i];
            }
        }

        return groups <= m;
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;

        for (int x : nums) {
            sum += x;
        }

        int st = *max_element(nums.begin(), nums.end());
        int end = sum;
        int ans = sum;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (isValid(nums, n, k, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }

        return ans;
    }
};
