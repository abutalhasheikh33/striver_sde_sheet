   vector<vector<int>>mergeIntervals(vector<vector<int>>& intervals){
        // sort the array so that all the intervals are sorted
        // create answer vector to store the merged intervals
        // start loop from 0 to n-1
        // store the first interval and last interval of the vector
        // check if the answer array is empty or
        // the start is greater than end of the last element stored 
        // in ans
        // then push a new vector {start,end} which creates a new interval
        // else in the end last element of ans store the current end or 
        // it will remain the same depends on the maximum between the two
        // for eg the interval is 13,18 and the current interval
        // is 15,17 this end is smaller than the end of ans
        // so it will remain the same 
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        for(int i=0;i<intervals.size();i++){
            int start = intervals[i][0];
            int end = intervals[i][1];
            if(ans.empty() || start>ans.back()[1]){
                ans.push_back({start,end});
            }else{
                ans.back()[1] = max(ans.back()[1],end);
            }

        }
        return ans;
    }

    