



                                                                                            //2849

class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
       if(sx==fx && sy==fy)return t!=1;
        if(abs(fx-sx)<=t && abs(fy - sy)<=t)return true;
        return false;
    }
};
