class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //shift all the non zeros element to left
        int nonzero=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){    //j value ko non zero indez m daal do
            swap(nums[j],nums[nonzero]);
            nonzero++;
            }
        }
    }
};