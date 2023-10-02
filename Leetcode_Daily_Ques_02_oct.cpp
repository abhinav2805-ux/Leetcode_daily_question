




                                                                         // Leetcode 2038





class Solution {
public:
    bool winnerOfGame(string colors) {
     
        int cA=0;
        int cB=0;
        for(int i=1;i<colors.size()-1;i++){
           
            if(colors[i-1] == colors[i] && colors[i+1] == colors[i]){
                if(colors[i] =='A'){
                    cA++;
                }
             
                else{
                    cB++;
                }
            }
        }
       
        return cA>cB;
    }
};







        
    
