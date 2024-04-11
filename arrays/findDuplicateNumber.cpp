    // Brute force uses extra space
    
    int findDuplicate(vector<int>& nums) {
        vector<int>nums1(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums1[nums[i]]==nums[i]){
                return nums[i];
            }
            nums1[nums[i]]=nums[i];
        }
        return -1;
    }