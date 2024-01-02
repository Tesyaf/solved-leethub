class Solution {
public:
    bool isPalindrome(int x) {
        long y = 0;
        int temp = 0;
        int revX = x;
        while(x != 0){
            temp = x % 10;
            y = y*10 + temp;
            x = x/10;
        }
        if (revX >= 0){
            if (revX == y){
                return true;
            }else {
                return false;
            }
        }else{
            return false;
        }
    }
};