




                                                                                                            //191
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c=0;
      while(n>0){
          c = c + n%2;
          n = n/2;
      }
       return c;
    }
};
