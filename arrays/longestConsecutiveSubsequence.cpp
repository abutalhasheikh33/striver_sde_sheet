class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        // we have to find the longest consecutive subsequence 
        // consecutive subsequence :- 100 101 102 or 1 2 3
        // lets take this case :- 100,4,200,1,3,2 
        // first the sort the array
        // 1 2 3 4 100 200
        // if the array is empty return 0
        // initialize count as zero , maxCount with INT_MIN
        // iterate from 0 to  n-1
        // if the count is 0 initialize it with 1
        // if the previous value is equal to current value ignore it 
        // if there are duplicate elements you should count it once
        // if the current value is consecutive to the previous increment the count eg count will be incremented to 2  current value : 2 previous value:1 (refer above case) sequence now contain 2 numbers
        // if it is not then we have to start a new sequence eg 100 200 both are not consecutive when pointer reaches 200 we will
        // start count from 1



        // if( nums.size() == 0 ) return 0;
        
        // sort(nums.begin(),nums.end());
        // int count = 0;
        // int maxCount = INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     if(count == 0){
        //         count = 1;
        //     }
        //     else if(nums[i-1] == nums[i]){
        //         continue;
        //     }
        //     else if(nums[i-1]+1 == nums[i]){
        //         count++;
        //     }
        //     else{
        //         count = 1;
        //     }
        //     maxCount = max(maxCount,count);
        // }
        // return maxCount;



        // Optimal approach
        // we will create a unordered set
        // initialize count as zero , maxCount with INT_MIN
        // insert all the elements in this unordered set
        // then iterate over the set
        // 100,4,200,1,3,2 
        // if we find a number which is the starting point of sequence eg in 1 is the starting point of 
        // then we will find the consecutive elements
        // intialize count one
        // start a while loop until we are getting the next element of sequence like 1 2 3 4 it will stop if we get nums[i+1]!=nums[i] like
        // if we get 3 after 1 instead of 2 or if we get 1 after 3 instead of 4
        // then we will compare it by maxCount if the current count is greater than maxCount store it in maxCount
        // we are gonna ignore 2 3 4 because they are not starting point we will check that nums[i]-1 exists then we will ignore them
        // not exists then it is a starting point

        if( nums.size() == 0 ) return 0;
        unordered_set<int> intSet;
        int count = 0;
        int maxCount = INT_MIN;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            intSet.insert(nums[i]);
        }
        for(auto it:intSet){
            if(intSet.find(it-1) == intSet.end()){
                
                count = 1;
                while(intSet.find(it+count) != intSet.end()){
                    count+=1;
                    
                }
                maxCount = max(count,maxCount);
            }

        }
        return maxCount;
    }
};