 // recursive function merge sort(arr,low,high)
    // calculate a mid keep low and high at start and end of array
    // call the mergeSort functions two times
    // one with low and high as mid
    // second one with mid+1 as low and high
    // and then call a function called merge(arr,low,mid,high) to merge the array
    // and sort it
    // in merge we will compare them and merge them using temp array
    // we will compare using two pointers one using low on the first
    // array and mid+1 on the second array
    // iterate it till one array reaches till mid
    // and second reaches till high 
    // we will push them in the original array
    // since we have to place them the in their original positions which low to high
    // and they are in temp array
    // we subract low with i (i-low) and increment which will start at low and go till high


    // if we wanna count inversion that how many pairs we can make of
    // nums[i] > nums[j] and i < j 
    // 5 , 2 , 3 ,1
    // 5 pairs are 5,2 5,3 5,1 2,1 3,1 
    // during merge sort array is divided then merge
    // so before merging both array left and right are sorted
    // we can just compare to count the pairs because if 
    // 2 is making pair with 1 then it is gonna make
    // pair with every number after since the array is sorted


// this is a merge sort code with slight changes for counting inversions just created a count variable

void merge(vector<int>& nums,int low,int mid,int high,int&count){
        int i = low;
        int j = mid+1;
        vector<int>temp;
        while(i<=mid && j<=high){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }
            else{
                count = count + 1 + (mid-i);
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
        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
    }

    void mergeSort(vector<int>& nums,int low,int high,int&count){
        if(low==high) return;
        int mid = (low+high)/2;

        mergeSort(nums,low,mid,count);
        mergeSort(nums,mid+1,high,count);
        merge(nums,low,mid,high,count);
    }
    vector<int> sortArray(vector<int>& nums) {
        int count=0;
        mergeSort(nums,0,nums.size()-1,count);
        cout<<count;
        return nums;
    }
};