    // Brute force uses extra space
int findDuplicate(vector<int>& nums) {
        // We have to find a duplicate number in nums array containing
        // n+1 numbers
        // create a nums1 vector of size nums
        // loop over the nums and add element in nums1 array in nums[i]
        // position and if a number already exist in that position return that number
        // that is duplicate
        vector<int>nums1(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums1[nums[i]]==nums[i]){
                return nums[i];
            }
            nums1[nums[i]]=nums[i];
        }
        return -1;
    }