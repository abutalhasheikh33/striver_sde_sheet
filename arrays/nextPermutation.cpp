class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //optimal solution
        // we have to find next large number
        // find the breakpoint for eg : a[] = 2 1 5 4 3 0 0
        // we start iterating from last since we have to find the next largest permutation
        // the condition will be a[i]<a[i+1] and when this condition satisifies
        // we found our breakpoint at 1 that is at i=1;
        // if we dont find it we just reverse the array and return it
        // which means that this is the largest permutation and we need to return the first permutation
        // we can place 1 anywhere after i=1 but with a number which is just larger than 1
        // we have to run a loop and find a number just larger than 1 and swap with it
        // which will be 3 after swap array will look like: 2 3 5 4 1 0 0      
        // then we have to reverse the remaining array because it is in a descending order
        // and we have to find the next large number or permutation
        // we will use reverse function and after that array will look like
        // 2 3 0 0 1 4 5
         int index=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                cout<<"hi";
                index=i;
                break;
            }
        }
        if(index==-1) {reverse(nums.begin(),nums.end()); return;}
        int temp;
        for(int i=index+1;i<nums.size();i++){
            if(nums[index]<nums[i]){
                temp=i; // find the index to be swapped with
            }
        }

        swap(nums[index],nums[temp]); // swap with the  
        reverse(nums.begin()+index+1,nums.end());
        

        






        

    }
};