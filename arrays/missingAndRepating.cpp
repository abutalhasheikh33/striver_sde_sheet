        //Optimal solution :-1  
        
        // 3 + 1 + 2 + 5 + 3 - 1 - 2 - 3 - 4 - 5
        // 3 - 4 (x-y) x-y=-1 and we have to find x+y=?
        // x is the repeating number and y is the missing number
        // but we have to find these by solving equations  
        // store the sum of all numbers of array (S)
        // store the sum of square of numbers of array (S2)
        // store the sum of all natural numbers from 1 to n (Sn)
        // and then store the square of natural numbers (S2n)
        // then we will get S-Sn (x-y) (val1)
        // then we will get S2-Sn (x^2 + y^2) and we can write this as ((x-y) (x+y)) and we know the value of x-y and we can find x+y (val2)
        // then we will solve x+y   and x-y 
        // and we will get x and y 

        long long n = nums.size();
        long long Sn = (n*(n+1))/2;
        long long S2n = (n*(n+1)*((2*n)+1))/6;
        long long S=0;
        long long S2=0;
        for(int i=0;i<n;i++){
            S+=(long long)nums[i];
            S2+=((long long)nums[i]*(long long)nums[i]);
        }
        //x-y;
        long long val1 = S-Sn;
        //x2+y2
        long long val2 = S2-S2n;
       //cout<<val1<<" "<<val2<<endl;
        val2 = val2/val1;
        long long x = (val1+val2)/2;
        long long y = (val2-val1)/2;
        return {(int)y,(int)x};