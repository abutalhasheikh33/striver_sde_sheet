class Solution {
public:       
        void printPascalRow(int n,vector<vector<int>> &a){
                    int rows=n;
                    int ans = 1;
                    // if(rows==0) {
                    //     a[rows].push_back(1);
                    //     return;
                    // }    
                    for(int col=0;col<rows;col++){
                        if(col==0 || col == rows-1) a[rows-1].push_back(1);
                    else{
        
                    
                    
                     
                        ans = ans * (rows-col); //ans will be multiplied by n - col total rows 
                                            //will be subracted by the current col ans will be 4,3,2 incase of n=5
                        ans = ans/col;     // the ans is then divided by the current col which is 1,2,3
                        a[rows-1].push_back(ans);
                    } 
                }
            }

        
    vector<vector<int>> generate(int numRows) {
        //Brute force and generate the entire pascal triangle
        
        // Create a vector of vector type int (2d vector)
        // start with iterating over the rows of matrix
        // for each row resize the inner matrix to the position of row
        // for example if it is the first row size of inner matrix will be 1
        // then iterate over the inner matrix which are the columns
        // if it is the first or last column assign 1
        
       // for the other columns create a sum variable and
       // run a loop which will start from the previous column and end on current column
       // but we are accessing the previous row elements
       // the current element will sum of previous column and the current of the previous row
       // store it in sum and assign it to the current element
       // return the matrix

        vector<vector<int>> a(numRows);
        // for(int i=0;i<numRows;i++){
        //     a[i].resize(i+1);
        //     for(int j=0;j<=i;j++){
        //         if(j==0 || j==i){
        //             a[i][j] = 1;
        //         }
        //         else{
        //             int sum=0;
        //             for(int k=j-1;k<=j;k++){
        //                 sum+=a[i-1][k];
        //             }
        //             a[i][j] = sum;
        //         }
        //     }
        // }
        // return a;

        // generate a particular element of pascal triangle you will be given the row and column
        //nCr formula
        // 4*3*2*1 / 1 * 3*2*1;

        // get row as n and column r
        // store them as row = n-1 and col = r-1;
        // then we apply the formula row C col = row!/col!*(row-col)!
        // if n=8 and r=4 then row = 7 and col = 3
        //  7*6*5*4*3*2*1 / 3*2*1 * 4*3*2*1  ; this both will be divided  4*3*2*1/4*3*2*1
        // and remaining will be 7*6*5/ 3*2*1 
        // so we have to always multiply the row col number of times/
        // here col = 3 so always we have to go back and multiply three steps behind row
        // i.e if row = 9 col = 4 then 9 will multiplied 4 times 9*8*7*6/4*3*2*1
        // int ans =1 will be created
        // loop will run till col times start from j=1 to j<=col; 
        // ans = ans*(row/j);
        


        // void printPascalElement(int n,int r){
        //     int row = n-1;
        //     int col = r-1;
        //     int ans=1;
        //     for(int j=1;j<=col;j++){
        //         ans= (ans * row)/j;
        //         row--;
        //     }
        //     cout<<ans;
        // }

        // generate a particular row in pascal triangle

        // the first and last element will be 1
        // if the input is n = 5 we need to print the 5th row
        // and there will be 5 columns
        // if the input is 5 the expected output is
        // 1 4 6 4 1
        // 1 4/1 4*3/1*2    4*3*2/1*2*3  1
        // every next element is multiplied by the previous element-1 in th numerator
        // and previous element + 1 in the denominator   
        // 1. create a variable called ans = 1;
        // 2. start a loop from 0 to number of columns or rows both are same
        // for(int col=0;col<rows;col++)
        // 3. inside the loop 
             
                //    if(col == 0 || col == n-1) cout<<0;
                //     else{
                     
                //         ans = ans * (rows-col); //ans will be multiplied by rows - col total rows 
                //                             //will be subracted by the current col which is 4,3,2,1 incase of n=5
                //         ans = ans/col; // the ans is then divided by the current col which is 1,2,3
                //         cout<<ans<<" ";
                //     } 

            for(int rows=1;rows<=numRows;rows++){
              printPascalRow(rows,a);
            }
        return a;
    }
};