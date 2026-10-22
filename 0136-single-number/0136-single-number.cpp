class Solution {
public:
    int singleNumber(vector<int>& nums) {
          int currSum = 0;
        
        
        for ( int val : nums ){
            currSum ^= val;
            
        }
        return currSum ;
    }
};