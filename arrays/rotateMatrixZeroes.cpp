class Solution {
public:

void transpose(vector<vector<int>>&matrix){
    // We need to rotate the matrix by 90 degrees in a clockwise direction
    // first we take the transpose of the matrix
    // which is the rows will be converted into columns
    // and then we will reverse every column using reverse function
    

  for(int j=0;j<matrix[0].size();j++){
    for(int i=j;i<matrix.size();i++){
      swap(matrix[i][j],matrix[j][i]);
    }
    reverse(matrix[j].begin(),matrix[j].end());
  }
}
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);

    }
};