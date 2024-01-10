class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int sisa = 0;
        int temp = 0;
        int sum = 0;
        vector<int>ans;
        for (short i = num.size() - 1 ; i >= 0; i--){
            temp = k % 10;
            k = k/10;
            sum = num[i] + temp + sisa;
            sisa = sum/10;
            ans.push_back(sum%10);
        }
        while(k>0){
            temp = k % 10;
            k = k/10;
            sum = temp + sisa;
            ans.push_back(sum%10);
            sisa = sum/10;
        }
        if (sisa > 0)
        ans.push_back(sisa);

        reverse(ans.begin(),ans.end());
    return ans;
    }
};