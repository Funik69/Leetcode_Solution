class Solution {
public:
    bool winnerOfGame(string clr) {
        int n=clr.size();
        if(n<=2) return 0;
        int i=0,j=2,clrA=0,clrB=0;
        while(j<n){
            if(clr[i]=='A' and clr[i+1]=='A' and clr[j]=='A') 
            clrA++;
            else if(clr[i]=='B' and clr[i+1]=='B' and clr[j]=='B')
            clrB++;
            i++;
            j++;
        }
        return clrA>clrB;

    }
};