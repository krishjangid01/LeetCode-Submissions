class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int final_ans = INT_MIN;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                int ans = (nums[i]-1)*(nums[j]-1);
                final_ans = max(final_ans, ans);
            }
            
        }
        return final_ans;
    }
};