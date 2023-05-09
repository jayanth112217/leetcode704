class Solution {
public:
    int search(vector<int>& nums, int target) {
     int low=0;
     int high=nums.size()-1;
     while(low<=high){
        int  mid = (low+high+1)/2;
         if(target > nums[mid]) {
             low++;
         }
         else if(target == nums[mid]) {
             return mid;
         }
         else {
             high--;
         }
     }   
     return -1;
    }
};