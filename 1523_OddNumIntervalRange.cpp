class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        int intermediate;
        intermediate=(high-low)/2;
        if (low%2!=0 && high%2!=0){
            count=count+2;
            count=count+intermediate-1;
        } 
        
        else if (high%2==0 && low%2==0){
            count=count+intermediate;
        }
        else if (high%2!=0 && low%2==0){
            count++;
            count=count+intermediate;
        }
        else if (high%2==0 && low%2!=0){
            count++;
            count=count+intermediate;
        }
       return count; 
    }

};
