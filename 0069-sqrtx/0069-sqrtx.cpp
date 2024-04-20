//S.C =O(1)
//T.C=O(root under x)
/*class Solution {
public:
    int mySqrt(int x) {
        long long y=0;
        while(y*y<=x)
        y++;
        return y-1;

    }
};*/
class Solution {
public:
   long long int binarySearch(int n){
      long long   int s=0;
        long long int e=n;
      long long int ans= -1;   
       
       while(s<=e){
           long long int mid = s + (e - s) / 2;
          long long int square=mid*mid;
           if(square == n){
               return mid;
           }
          else if(square <n){
               ans=mid;
               s=mid+1;
           }
           else{
               e= mid -1;
           }
         
       }
       return ans;
   }
    int mySqrt(int x){
        return binarySearch(x);
    
    }
};