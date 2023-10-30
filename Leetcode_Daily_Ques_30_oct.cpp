



                                                              //1356
class Solution {
public:
        int decimal_to_binary(int n){
    string res="";
      int count = 0;
    while(n>0){
        if(n%2==0){
            //even
            res="0"+res;
        }
        else{
            //odd
            res="1"+res;
            count++;
        }
        n=n/2;
    }
  
    
    return count;
}

    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>ans;
        int n = arr.size();
        int x = 0;
        for(int i =0;i<n;i++){
            x = decimal_to_binary(arr[i]);
            ans.push_back({x,arr[i]});
            x = 0;
        }
        sort(ans.begin(),ans.end());
        vector<int>v;
        for(int i =0;i<n;i++) {
            v.push_back(ans[i].second);
        }
    return v;

    }
};
