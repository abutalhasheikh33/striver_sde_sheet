class Solution {
public:
    void sortColors(vector<int>& nums) {
        // make three pointers
        // a pointer (i) which will start from 0 and iterate the whole array
        // a pointer (ptr0) which will start from 0 and before these pointer
        // all the zeros will be there
        // a pointer (ptr2) which will start from last of the array
        // after this pointer all the 2s will be there
        // we will have three condition 
        // if encouter a 2 swap nums[i] with nums[ptr2] and decrease the ptr2
        // this will ensure that  after this pointer all the 2s will be there
        //  if encouter a 0 swap nums[i] with nums[ptr0] and increase the ptr0
        //  this will ensure that  before this pointer all the 0s will be there
        // and if you encounter a 1 just increase pointer (i)
        // we have to sort the array from ptr0 to ptr2
        // because before ptr0 and ptr2 array is sorted
        int i = 0;
        int ptr0 = 0;
        int ptr2 = nums.size()-1;
        while(i<=ptr2){
            if(nums[i]==2){
                swap(nums[i],nums[ptr2]);
                ptr2--;
            }else if(nums[i]==0){
                swap(nums[i],nums[ptr0]);
                ptr0++;
                i++;
            }else{
                i++;
            }    
        }

    }
};