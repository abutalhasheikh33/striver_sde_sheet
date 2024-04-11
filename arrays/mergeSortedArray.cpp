// leetcode way
// Solution (Own)

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int index = m;
        int i=0;
        while(i<n){
            nums1[index] = nums2[i];
            i++;
            index++;
        }
        sort(nums1.begin(),nums1.end());
}