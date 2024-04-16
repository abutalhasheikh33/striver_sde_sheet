    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // own solution :- time complexity is O(n + m log m) 
        // space complexity is O(1)
        // we have to merge two sorted array in a sorted order
        // nums1 =  {1,2,3,0,0,0} nums2 = {2,5,6}
        // after merging nums1 = {1,2,2,3,5,6} 
        // we will get m and n which are number of elements in nums1 and nums2 respectively
        // m is the number of non zero elements and after that there are consecutive zeros
        // basically num1 has a length of m+n
        // we will store the int index = m
        // and a variable int i = 0
        // while loop will run till i<n
        // inplace of the zeros we will put elements of num2
        // nums1[index]=nums2[i]
        // we will increase the i and index
        // and nums1 will look like 1 2 3 2 5 6
        // and then we will sort the array
        // 1 2 2 3 5 6
        int index = m;
        int i=0;
        while(i<n){
            nums1[index] = nums2[i];
            i++;
            index++;
        }
        sort(nums1.begin(),nums1.end());
    }