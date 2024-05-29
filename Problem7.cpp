
class Solution {
public:
    int reverse(int x) { 
        long revx=0;
        while(x!=0){
            int ld=x%10;
            revx=(revx*10)+ld;
            x=x/10;
        }
        if(revx>INT_MAX || revx < INT_MIN ){
            return 0;
        }
        
        
        else{
            return revx;
        }
    }
        
};
