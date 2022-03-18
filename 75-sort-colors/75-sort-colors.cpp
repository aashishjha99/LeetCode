class Solution {
public:
    void sortColors(vector<int>& nums) {
         int n = nums.size();
        int l = 0;
        int h = n-1;
        int mid = 0;
        
        while(mid<=h){
          for(int i = 0 ; i<n ; i++){
              if(nums[mid] == 0){
                  swap(nums[l++] , nums[mid++]);
              }
              else if(nums[mid] == 1){
                  mid++;
              }
              else if(nums[mid] == 2){
                  swap(nums[mid] , nums[h--]);
              }
            }
        }
    }
};