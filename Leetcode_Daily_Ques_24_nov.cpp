


                                                                                            //1561
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int i = piles.size()/3;
        int sum = 0;
        sort(piles.begin(),piles.end());
        int j = piles.size()-2;
        while(i>0){
            sum+=piles[j];
            j = j-2;
            i--;
        }
        return sum;
}
};
