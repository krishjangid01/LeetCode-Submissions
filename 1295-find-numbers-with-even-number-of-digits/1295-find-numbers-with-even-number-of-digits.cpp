class Solution {
public:
    int count_number(int a){
        int number_of_digits = 0;
        while(a>0){
            a = a/10;
            number_of_digits +=1;
        }
        return number_of_digits;
    }
    int findNumbers(vector<int>& nums) {
        int output =0 ;
        for (int i = 0; i<nums.size();i++){
            int ans = count_number(nums[i]);
            if(ans%2==0){
                output+=1;
            }
        }
        return output;
    }
};