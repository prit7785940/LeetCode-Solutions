class Solution {
public:
    int tribonacci(int n) {
        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
       
        long long ft = 0, st = 1, tt = 1;

            for(int i=1;i<=n;i++){
               int frt=ft+st+tt;
               ft = st;
               st = tt;
               tt = frt;
            }
        
        return ft;
    }
    
};