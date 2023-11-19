




                                                                                        //1887

class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 0;
       for(int i=nums.size()-2;i>=0;i--){
            int a=nums[i+1];
            if(a!=nums[i]) count+=nums.size()-1-i;
        }
        return count;
 }
};
