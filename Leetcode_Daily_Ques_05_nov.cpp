



                                                                              //1535

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
       int n = arr.size();
        if (k >= n) {
            return *max_element(arr.begin(), arr.end());
        }


        deque<int>dq;
        for( auto x:arr){
            dq.push_back(x);
        }
        int x;
        int ans = dq.front();
        k = k % arr.size();
        int freq = k;
        dq.pop_front();
        while(k>0){
            x = max(ans,dq.front());
            if(ans == x){
                dq.push_back(dq.front());
                dq.pop_front();
                k--;
            }
            else{
                k = freq;
                dq.push_back(ans);
                ans = x;
            }


        }

    return ans;
         }
};
