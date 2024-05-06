vector<int> twoSum(vector<int>& nums, int target) {

        //  First approach
        // take a hashmap and map the current number with its index
        // if target - nums[i] exist i.e other half of target
        // then return i, target - nums[i]
        
       
        // map<int,int>mp;
        // for(int i=0;i<nums.size();i++){
        //     cout<<target - nums[i]<<endl;
        //     if(mp.find(target - nums[i]) != mp.end()){
        //         temp.push_back(mp[target - nums[i]]);
        //         temp.push_back(i);
        //         return temp;
        //     }
        //     mp[nums[i]] = i;
        // }
        // return temp;


        // Second approach 
            // store every element with its index as a pair in vector
            // then sort the vector
            // then use two pointer
            // if the sum of element on first pointer and element on second pointer
            // is equal to target return the indexes 
            // if it is greater than target reduce second pointer
            
        vector<pair<int,int>> store;
        for(int i = 0;i<nums.size();i++){
            store.push_back({nums[i],i});
        }
        sort(store.begin(),store.end());
        int i = 0;
        int j = store.size()-1;
        while(i<j){
            int sum = store[i].first + store[j].first;
            if(sum==target){
                return {store[i].second,store[j].second};
            }
            else if(sum>target){
                j--;
            }
            else{
                i++;
            }
        }
        return {};
    }