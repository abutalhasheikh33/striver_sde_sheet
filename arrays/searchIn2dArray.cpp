bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Brute force approach will be traverse the array
        // apply linear search on every row
        
        // Better approach will be traverse the array
        // and apply binary search on every row


        // Optimal solution
        // apply binary search by treating the 2d array as
        // a 1d array we apply binary search on array of n = row*col
        // and but since it is a 2d array we need row and col to traverse
        // we have to divide the mid by no of cols to get row index and col index
        // the quotient will be the row
        // the remainder will be the col
        // then the usual binary search

        int row = matrix.size();
        int col = matrix[0].size();
        int n = row*col;
        int start = 0;
        int end = n-1;
        int mid = (start + end) / 2;
        while(start<=end){
            int i = mid/col;
            int j = mid%col;
            if(matrix[i][j]==target){
                return true;
            }else if(matrix[i][j]<target){
                start = mid+1;
            }else {
                end = mid-1;
            }
            mid = start+(end-start)/2;
        }
        return false;
    }