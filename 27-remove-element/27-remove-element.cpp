class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        if(nums.size()==0){
            return 0;
        }
        
        int first=0;
        int last=nums.size()-1;
        
        while(nums[last]==val){
            last--;
            if(last<0){
                return last+1;
            }
        }
        
        while(first<last){
             while(nums[last]==val){
            last--;
            }
            if(nums[first]==val && first<last){
                int temp=nums[first];
                nums[first]=nums[last];
                nums[last]=temp;
                
                first++;
                last--;
            }
            else{
                first++;
            }
        }
        
         while(nums[last]==val){
            last--;
        }
        
        return last+1;
    }
};