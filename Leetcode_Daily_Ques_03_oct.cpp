

                             //1512




class Solution {
public:
    long double fact(int n) {
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}

    long double com(int n){

        return  fact(n) / (fact(2) * fact(n-2));

    }
    int numIdenticalPairs(vector<int>& nums) {
        
        map<int,int>mp;
        for(auto x : nums) mp[x]++;

        long double count = 0;
        for(auto x:mp){
            if(x.second >=2){
                count += com(x.second);
            }
        }
        return (int)count;

    }
};
