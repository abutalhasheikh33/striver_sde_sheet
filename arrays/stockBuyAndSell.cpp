class Solution {
public:

    // we create three variables
    // minCost for storing minimum buying cost
    // diff for storing the difference between minCost and the selling price
    // pointer (i) for iterating over array
    // we will store the first element in minCost
    // then iterate over array
    // check which is greater between diff and currentPrice-minCost
    // if the latter is greater then store it in diff
    // this is for finding when we will get the highest profit
    // we have to find the highest possible difference between the
    // selling price and cost price
    // and then check if the minCost or current price which is smaller
    // if currentPrice is small then store it in minCost
    // this is for finding minCost
    // increment i to move to the next element 
    
    int maxProfit(vector<int>& prices) {
        
     int minCost = prices[0];
     int diff = INT_MIN;
     int i=0;
     while(i<prices.size()){
        diff = max(diff,prices[i]-minCost);
        minCost = min(minCost,prices[i]);
        i++;
     }

      return diff;

    }
};