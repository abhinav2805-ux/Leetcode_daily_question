


                                                     //   229



class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        double k = n/3.0;
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            int ele = x.first;
            int freq = x.second;
            if(freq>k) v.push_back(ele);
        }
       return v;
    }
};
