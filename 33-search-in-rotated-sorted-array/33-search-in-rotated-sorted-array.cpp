class Solution {
    
    private:
     private:
        int getPivot(vector<int>& nums) {

        int s = 0;
        int e = nums.size() - 1;

        int mid = s + (e - s) / 2;
 
        while (s < e) {
    
        if (nums[mid] >= nums[0])
        {

            s = mid + 1;
        }

        else
        {

            e = mid;
        }

        mid = s + (e - s) / 2;
    }

    return s;
            
}
    
    int binarySearch(vector<int>& nums,int s,int e,int target) {
        
        int start =  s;
        int end = e;
        int mid = s + (e -s)/2;
        
        while(s <= e) {
            
            if(target == nums[mid]){
                return mid;
            }
            
            else if(target > nums[mid]) {
                
                s = mid +1;
            }
            
            else {
                
                e = mid -1;
            }
            
             mid = s + (e -s)/2;
        }
        
        return -1;
        
    }
public:
    int search(vector<int>& nums, int target) {
        
        int pivot = getPivot(nums);
        int n = nums.size() -1;
        
        if(target >= nums[pivot] && target <= nums[n]) {
            
            return binarySearch(nums,pivot,n,target);
        }
        
        else 
            
            return binarySearch(nums,0,pivot-1,target);
        
    }
};