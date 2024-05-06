#include <bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // we need to find longest subarray of sum k (array contain only positives)
    // we will create a map of long long and int
    // and intialize a sum variable of long long
    // and a maxCnt with INT_MIN
    // we will iterate on every element from 0 to n-1 
    // then add it to sum
    // if(sum == k) we will take the max of maxCnt and current subarray i.e i+1
    // we subract sum-k = rem
    // we will check if the current rem is there in the map 
    // if it is then we will take the max of maxCnt and current index - mp[rem]
    // logic behind this is if sum - k = rem then sum - rem = k therefore we will remove rem from sum by taking sub array after sum 
    // we map sum for every position in the map (sum,position) only if it already does not exist
    // 10, 5, 2, 7, 1, 9 
    
    
    
    
    
    // Write your code here
    // map<long long,int>mp;
    // long long sum = 0;
    // int maxCnt = INT_MIN;
    // for(int i=0;i<a.size();i++){
    //     sum+=a[i];
    //     long long rem = sum-k;
    //     if(sum == k){
    //         maxCnt = max(maxCnt,i+1);
    //     }
    //     if(mp.find(rem)!=mp.end()){
            
    //      maxCnt = max(maxCnt,i-mp[rem]);
    //     }
    //     if(mp.find(sum) == mp.end()) mp[sum] = i;
        
    // }

    // Optimal approach but only positives 
    // we will have two pointer on 0th index i and j
    // and intialize a sum variable of long long
    // and a maxCnt with INT_MIN
    // we will increase the j pointer and keep the i pointer in place (j<n)
    // we will add every element to the sum variable
    // if sum > k :
        // then we will reduce the subarray
        // by increasing i and removing every ith element from sum
    // then if sum == k take max out of maxCnt and the subarray between i and j (j-i)+1
    // increment j till it reaches n-1
    // and if after j reaches n-1 i is remaning start a loop till sum>=k and i<j and check if(sum==k) and sum-a[i] after each iteration
    
 

    int i = 0;
    int j =0;
    int n = a.size();
    long long sum = 0;
    int maxCnt = INT_MIN;

    while(j<n){
        sum+=a[j];
        if(sum>k){
            while(sum>k && i<j ){
                sum -= a[i];
                i++;
            }
        }if(sum == k){
            maxCnt = max(maxCnt,(j-i)+1);
        }
        j++;
    }
     while(sum>=k && i<j){
         if(sum == k) maxCnt = max(maxCnt,(j-i));
         sum-=a[i];
         i++;

     }
    return maxCnt;

}