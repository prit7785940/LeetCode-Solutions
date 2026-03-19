class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        long long revum = 0;
        if(x<0){
            return false;
        }
          while(n>0){
            int d = n % 10;
            revum = revum * 10 + d;
            n = n/10 ;
          } 
          if(revum == x){
            return true;
          }
          else {
            return false;
          }
    }
};