class Solution {
public:
    int distanceTraveled(int mt, int ad) {
        int res=0;
        while(mt>0){
            if(mt>=5){
                res+=5;
                mt-=5;
                if(ad>=1){
                    mt+=1;
                    ad-=1;
                }
            }
            else{
                res+=1;
                mt-=1;
            }
        }
        return res*10;
    }
};