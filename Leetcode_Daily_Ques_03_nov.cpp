



                                                                          //1441
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int s = 0;
        stack<int>st;
        int k = n;
        while(k>0){
            st.push(k);
            k--;
        }

        for(int i =0;i<target.size();i++){
            if(target[i]==st.top()) {
                ans.push_back("Push");
                st.pop();
                }
            else{
                s = target[i]-st.top();
                while(s>0){
                    ans.push_back("Push");
                    ans.push_back("Pop");
                    st.pop();
                    s--;
                }
                ans.push_back("Push");
                st.pop();
            }
        }

        return ans;
    }
};
