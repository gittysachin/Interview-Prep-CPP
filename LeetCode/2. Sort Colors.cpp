// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
// Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]


// Dutch National Flag Algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo = 0;
        int mid = 0;
        int hi = nums.size() - 1;
        
        while(mid <= hi){
            switch(nums[mid]){
                    
                // If the element is 0
                case 0:
                    swap(nums[lo++], nums[mid++]);
                    break;
                
                // If the element is 1
                case 1: 
                    mid ++;
                    break;
                
                // If the element is 2
                case 2:
                    swap(nums[mid], nums[hi--]);
                    break;
            }
        }
    }
};