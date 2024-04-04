
class Solution {
public:
   void makeColumn(vector<vector<int>>& matrix,int i){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]!=0){
                matrix[i][j] = -1;
            }
            
        }
    }
    void makeRow(vector<vector<int>>& matrix,int j){
        for(int i=0;i<matrix.size();i++){
             if(matrix[i][j]!=0){
                matrix[i][j] = -1;
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        // Brute force 
        // Better solution
        //Optimal solution


        // brute force
            // iterate over the matrix
            // and if you come across a zero then make the whole column and row -1
            // then iterate again and make the -1 to zero

           

//             for(int i=0;i<matrix.size();i++){
//                 for(int j=0;j<matrix[0].size();j++){
//                     if(matrix[i][j]==0){
//                         makeRow(matrix,j);
//                         makeColumn(matrix,i);
//                     }
//                 }
//             }
//              for(int i=0;i<matrix.size();i++){
//                 for(int j=0;j<matrix[0].size();j++){
//                     if(matrix[i][j]==-1){
//                         matrix[i][j] = 0;
//                     }
//                 }
//             }

        
        // better solution

            // create a array for rows size = number of rows and fill it with zeros
            // same for the column
            // iterate over the matrix
            // if you encouter a zero that assign 1 at the same place in row and column array
            // array
            // then iterate over the row array and if encouter 1 then assign the whole row zero
            // same for the column



            // vector<int>rows(matrix.size(),0);
            // vector<int>column(matrix[0].size(),0);
            // for(int i=0;i<matrix.size();i++){
            //     for(int j=0;j<matrix[0].size();j++){
            //         if(matrix[i][j] == 0){
            //            rows[i] = 1;
            //            column[j] = 1;
            //         }
            //     }
            // }
            //  for(int i=0;i<matrix.size();i++){
            //     for(int j=0;j<matrix[0].size();j++){
            //         if(rows[i]==1 || column[j]==1){
            //             matrix[i][j] = 0;
            //         }
            //     }
            // }
            
            // optimal solution

            // take the first row as hash array for the colum to check wheter we should mark the column zero
            // take the first column as hash array for the row to check wheter should we mark the row zero
            // due to intersection the first element is common create variable for the first element of first column hash array assign it 1
            // iterate over the array and find zeros and based on that mark the hash array zero 
            // after that based on the hash array iterate the matrix starting with second row and column and mark zeroes in the matrix but don't touch the hash array
            // after this mark the hash array start with the column hash array which is the first row then the row hash array which is the first column

            int col0 = 1;
             for(int i=0;i<matrix.size();i++){
                for(int j=0;j<matrix[0].size();j++){
                    if(matrix[i][j] == 0){
                        if(j!=0){
                            matrix[0][j] = 0;
                            matrix[i][0] = 0;
                        }else{
                            col0 = 0;
                        }
                       
                    }
                }
            }

                for(int i=1;i<matrix.size();i++){
                for(int j=1;j<matrix[0].size();j++){
                    if(matrix[0][j] == 0 || matrix[i][0] == 0){
                        matrix[i][j] = 0;
                       
                    }
                }
            }

            for(int j = 0;j<matrix[0].size();j++) if(matrix[0][0] == 0) matrix[0][j] = 0;
            for(int i = 0;i<matrix.size();i++) if(col0 == 0) matrix[i][0] = 0;
            

            


    }
};