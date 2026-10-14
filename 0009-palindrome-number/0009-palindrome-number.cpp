class Solution {
public:
    bool isPalindrome(int x) {
        long og = x;
        long result=0;
        while (x>0){
            result = (result*10)+(x%10);
            x = x/10;
        }
        if(result==og){
            return true;
        }
        else{
            return false;
        }
    }
};