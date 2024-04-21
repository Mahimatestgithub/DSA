/*class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         nums1.erase(nums1.begin()+ m,nums1.end());
         nums2.erase(nums2.begin()+ n,nums2.end());
         for(int i=0;i<nums2.size();i++){
       nums1.push_back(nums2[i]);
        }
    sort(nums1.begin(),  nums1.end());
    }
};  //or */
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0, k=0;
        vector<int> nums3;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                nums3.push_back(nums1[i]);
                i++;
            }
            else{
                nums3.push_back(nums2[j]);
                j++;
            }
            k++;
        }
        
        while(i<m){
            nums3.push_back(nums1[i]);
            i++;
        }

        while(j<n){
            nums3.push_back(nums2[j]);
            j++;
        }
        // cout << nums1.size();

        nums1 = nums3;
    }
};


