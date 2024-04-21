class Solution {
public:

    // we have to implement a function equivalent to pow(x,n) x raise to n
    // we will get x and n as input
    // we will convert n from int to long store in nn and take absolute value
    // we will create ans variable and store 1 in it
    // we will run a loop till n is not zero
    // if the nn is odd then we will just decrease the n and multiply ans with x i.e if 4 ^ 5 then we will just
    // take a x out and multiply it by ans 4 * 4 ^ 4 then we have to find 4 ^ 4
    // if nn is even we will divide n by 2 and multiply x by itself that is take the square of x
    // because 4 ^ 4 = (4^2)^2
    // when nn becomes zero we will stop
    // if n was negative then we will take reciprocal of the ans
    double myPow(double x, int n) {
        long nn = abs(n);
        double ans = 1.0;
        
        while(nn){
            if(nn%2==0){
                x=x*x;
                nn = nn/2;
            }else{
                ans = ans*x;
                nn = nn - 1;
            }
        }
        if(n<0) ans = (double)(1.0)/(double)(ans);
        return ans;
    }
};