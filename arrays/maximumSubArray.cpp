class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Brute force solution (TLE)
        // we have to find a array which has the maximum sum
        // array will also contain negative numbers
        // we will start from the first element and add all the elements to it
        // after each addition we will compare it to the maxSum 
        // if it is greater than it store in maxSum
        // we will do it for every element add their subsequent elements to it
        // repeat the same process
        // before starting the addition we check that the first element
        // itself is greater than the maxSum then we will assign it to maxSum
             
        // int sum=0;
        // int maxSum=INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     sum=nums[i];
        //     if(sum>maxSum){
        //         maxSum=sum;
        //     }
        //     for(int j=i+1;j<nums.size();j++){
        //         sum = sum+nums[j];
        //         if(sum>maxSum) maxSum = sum;
        //     }
            

        // }
        // return maxSum;


        //Optimal solution
         //create a maxSum with minimum value of int_min
         // and a sum variable with the 0 as the initial
         //iterate over the array add elements one by one
         // if the current sum  is negative set it zero
        
         // and if the current sum is positive or zero check if adding the element 
         // is increasing the sum then add the element

        if(nums.size()==1) return nums[0];
         int maxSum = INT_MIN;
         int sum = 0;
         for(int i=0;i<nums.size();i++){
            if(sum<0){ 
            sum = 0;
            }
            if(sum>=0) {
                
                    sum = sum+nums[i];
               
            }
            maxSum = max(sum,maxSum);
         }
        
        return maxSum;
    }
    
     
};