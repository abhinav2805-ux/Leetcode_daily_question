


                                                                                            //1685

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
             int n = nums.size();
        vector<int> prefix(n, 0);
        vector<int> suffix(n, 0);
        prefix[0] = nums[0];
        for (int i = 1; i < n; ++i) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        suffix[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            suffix[i] = suffix[i + 1] + nums[i];
        }

        vector<int> ans(n);
        for (int i = 0; i < n; ++i) 
        {
            int leftSum = i * nums[i] - (i > 0 ? prefix[i - 1] : 0);
            int rightSum = (i < n - 1 ? suffix[i + 1] : 0) - nums[i] * (n - i - 1);
            ans[i] = leftSum + rightSum;
        }
        return ans;

    }
};
