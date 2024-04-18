//basically we are comparing 2^0 to 2^30 with i/p 'n', we are able to find n it is true ,else false

//brute force
class Solution {
public:
    bool isPowerOfTwo(int n) {
     for(int i=0;i<=30;i++){
     int ans = pow(2,i);
         if(ans==n){
             return true;
         }
     }
    
             return false;  
         }
     
    
};