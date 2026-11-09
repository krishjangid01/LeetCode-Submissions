class Solution {
public:
    bool ans(vector<int> &arr,int i){
        for (int j =0; j<arr.size(); j++){
            if(arr[j]==i){
                return true;
            }
        }
        return false;
    }
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
       for(int i =0; i<=n; i++){
        if (ans(nums,i)==false){
            return i;
        }

       } 
       return -1;
    }
};