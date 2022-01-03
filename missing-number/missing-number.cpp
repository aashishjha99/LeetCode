class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
         int ans = 0;
    int sum = 0;
    int n = nums.size();
    for(int i = 0; i<nums.size(); i++) {
          sum += nums[i];
          ans = n*(n+1)/2 - sum; 
      }   
    return ans;
}

};