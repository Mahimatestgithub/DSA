class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       vector<int>vec(2001,0);

       for(int &x : arr){  //array iterate and all no.is included in vec
        vec[x+1000]++;
       }
       sort(begin(vec),end(vec));

       for(int i=0;i<2001;i++){
        if(vec[i]!=0 && vec[i]== vec[i-1])
        return false;
       }
       return true;
    }
};