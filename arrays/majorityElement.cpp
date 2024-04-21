class Solution {
public:
    int majorityElement(vector<int>& nums) {

        //Brute force solution
        //we have to find a element which occurs more than n/2 (highest occuring)
        // we will store occurences in map
        // then find the highest occurence


        


        // map<int,int> mp;
        // for(auto i:nums){
        //     mp[i]=mp[i]+=1;
        // }
        // int majority = INT_MIN;
        // int number;
        //  for(auto i:nums){
        //     if(mp[i]>majority){
        //         majority = mp[i];
        //         number = i;
        //     }
        // }
        // return number;


        // optimal solution

        // Boyer-Moore Majority Voting Algorithm
        // we will run a loop till n-1
        // if the count is empty
        // add ele = nums[i]
        // cnt =1
        // and if cnt is not empty
        // ele == nums[i] current element
        // increment the cnt
        // if ele not equal nums[i] decrease the cnt
        // the ele which remains if a n/2 element exist will be ele
        // if in the question it is given that n/2 element will be present
        // return the ele 
        // otherwise check by iterating array again 
        // that the ele is the n/2 element or not

        int ele=0;
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            if(!cnt){
                ele = nums[i];
                cnt = 1;
            }else if(ele == nums[i]){
                cnt+=1;
            }else{
                cnt-=1;
            }
        }
        return ele;



        

    }
};