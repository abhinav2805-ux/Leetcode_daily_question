


class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) 
    {
        int M, G, P;
        M = G = P = 0;
       // vector<int> prefix_sum_of_travel(travel.size() + 1, 0);
        for (int i = 1; i < travel.size(); i++) {
            //prefix_sum_of_travel[i+1] = prefix_sum_of_travel[i] + travel[i];
            travel[i]+=travel[i-1];
        }
        int countM = 0, countP = 0, countG = 0;
        for (int i = 0; i < garbage.size(); i++) {
            for (char x : garbage[i]) {
                if (x == 'M') {
                    countM++;
                    M = max(M, i);
                } else if (x == 'G') {
                    countG++;
                    G = max(G, i);
                } else if (x == 'P') {
                    countP++;
                    P = max(P, i);
                }
            }
        }
        int result = countM + countP + countG;
    if (M != 0) result += travel[M - 1];
    if (G != 0) result += travel[G - 1];
    if (P != 0) result += travel[P - 1];

    return result;
    }
};
                                                                              //2391
