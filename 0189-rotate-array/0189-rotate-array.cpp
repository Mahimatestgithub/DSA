class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp(nums.size());
        for(int i=0;i<nums.size();i++)
        {
         temp[(i+k)%nums.size()] = nums[i];    //taking each number from its original position and putting it into a new position, shifted                                                to the right by k places, wrapping around if needed.
        }
        //copy temp into num vector
        
        nums = temp;
    }
};