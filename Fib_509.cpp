class Solution {
public:
    int fib(int n) {
        int i,fib1, fib2;
        fib1=0;
        fib2=1;
       int series,intermediate;
        i=1;
        if(n==0){
          series=fib1;
        } 
        else if(n==1){
            series=fib2;    
        }
        else if (n>0)
        {
            while(i<n && n<=30){
                intermediate=fib1+fib2;
                fib1=fib2;
                fib2=intermediate;
                i++;
                }
            series=intermediate;
        }
     return series;
        
    }
};
