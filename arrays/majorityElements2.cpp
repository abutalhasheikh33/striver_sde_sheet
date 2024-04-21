vector<int> majorityElement(vector<int>& nums) {
        
        // map<int,int> mp;
        // for(auto i:nums){
        //     mp[i]=mp[i]+=1;
        // }
        // int n = nums.size();
        // vector<int>ans;
        //  for(auto i=mp.begin();i!=mp.end();i++){
        //     if(i->second>(n/3)){
        //        ans.push_back(i->first);
        //     }
        // }
        // return ans;

        // optimal solution
           // Boyer-Moore Majority Voting Algorithm
        // we will run a loop till n-1
        // if the count is empty and nums[i] is not equal to ele2
        // add ele = nums[i]
        // cnt =1
        // if the cnt2 is empty and nums[i] is not equal to ele
        // add ele2 = nums[i]
        // cnt2 = 1
        // and if cnt is not empty
        // ele == nums[i] current element
        // increment the cnt
        // and if cnt2 is not empty
        // ele2 == nums[i] current element
        // increment the cnt2
        // if ele and ele2 not equal nums[i] decrease the cnt and cnt2
        // the ele which remains if a n/2 element exist will be ele
        // if in the question it is given that n/2 element will be present
    
        // check by iterating array again 
        // that the count of ele and ele2 are greater n/3 or not
        int ele=0;
        int ele2=0;
        int cnt = 0;
        int cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(!cnt && ele2 != nums[i]){
                ele = nums[i];
                cnt = 1;
            }else if(!cnt2 && ele != nums[i]){
                ele2 = nums[i];
                cnt2 = 1;
            }else if(ele == nums[i]){
                cnt+=1;
            }else if(ele2 == nums[i]){
                cnt2+=1;
            }
            else{
                cnt-=1;
                cnt2-=1;
            }
        }
        vector<int>ans;
        int count = 0;
        int count1 = 0;
        int n = nums.size();
        
        for(int i=0;i<nums.size();i++){
            if(ele == nums[i]){
                count+=1;
            }
            else if(ele2 == nums[i]){
                count1+=1;
            }
            
        }
          
        if(count>(n/3)) ans.push_back(ele);
        if(count1>(n/3)) ans.push_back(ele2);

        return ans;


    }