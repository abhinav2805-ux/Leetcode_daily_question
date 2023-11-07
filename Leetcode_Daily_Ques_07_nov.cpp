



                                                                              //1921
class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<float> ans;
        for (int i = 0; i < dist.size(); i++) {
            ans.push_back((float) dist[i] / speed[i]);
        }
        
        sort(ans.begin(), ans.end());
        int count = 0;
        
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] <= i) {
                break;
            }
            
            count++;
        }
        
        return count;
    }
};
