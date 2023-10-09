





                                                                          //34



class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector <int> v;
    int count=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==target){
            v.push_back(i);
        }
        else count++;
    }
    int m=v.size();
    if(m>2){
        return {v[0],v[m-1]};
    }
    if(count==n-1){
        v.push_back(v[0]);
        return v;
    }
    if(n==0 || count==n){
        return {-1,-1};
    }
    if(count==0){
        return {0,n-1};
    }
    else return v;
    }
};
