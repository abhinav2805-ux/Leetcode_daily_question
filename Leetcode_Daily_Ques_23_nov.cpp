


                                                                                              //1630

class Solution {
public:
bool arthimatic(vector<int>&v){
    if(v.size()==2) return true;
    int diff = v[1]-v[0];
    for(int i=1;i<v.size();i++){
        if((v[i]-v[i-1])!=diff) {
            return false;
        }
    }return true;
}
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
       bool ans = true;
       vector<bool>res;
        vector<int>v;
        for(int i = 0;i<l.size();i++){
            int a = l[i];
            int b = r[i];
           for(int j = a;j<=b;j++){
                v.push_back(nums[j]);
            } 
            sort(v.begin(),v.end());
            ans = arthimatic(v);
            if(ans==true) res.push_back(true);
            else res.push_back(false);
            v.clear();
        }
    return res;
}
};
