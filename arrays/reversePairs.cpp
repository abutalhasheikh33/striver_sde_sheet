// in this problem we have to find pairs where a[i] > 2 * a[j] and i<j
    // this problem is similar to unique pairs
    // you have to use merge sort
    // but before merging
    // we check if the element of first array is greater than 2 * element of second
    // array 
    // if it is we increment the pointer on second array
    // and if it is not we store that all the elements before
    // the current element of the second array will be making pairs
    
    
    void checkReversePair(vector<int>& nums,int low,int mid,int high,int&count){
        int i = low;
        int j = mid+1;
        while(i<=mid && j<=high){
            if(nums[i] > (2*(long long)nums[j])){
                j++;
            }else{
                count = count + (j-(mid+1));
                i++;
            }
        }

        while(i<=mid){
            count = count + (high - (mid+1)) + 1;
            i++;
        }
        
    }
    void merge(vector<int>& nums,int low,int mid,int high,int&count){
        vector<int>temp;
        int i = low;
        int j = mid+1;
        while(i<=mid&&j<=high){
            if(nums[i]<=nums[j]){
                
                temp.push_back(nums[i]);
                i++;
            }else{
               
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(nums[i]);
                i++;
        }
        while(j<=high){
            temp.push_back(nums[j]);
            j++;
        }

        for(int i = low;i<=high;i++){
            nums[i] = temp[i-low];
        }
    }
    void sort(vector<int>& nums,int low,int high,int&count){
        if(low==high) return;
        int mid = (low+high)/2;

        sort(nums,low,mid,count);
        sort(nums,mid+1,high,count);
        checkReversePair(nums,low,mid,high,count);
        merge(nums,low,mid,high,count);

    }
    int reversePairs(vector<int>& nums) {
        int count = 0;
        sort(nums,0,nums.size()-1,count);
        for(auto num:nums){
            cout<<num;
        }
        return count;
    }