class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0 && m==0){
            return;
            
        }
        
        if(n==0){
            return;
        }
        if(m==0){
            nums1=nums2;
        }
        int k=0;
        for(int i=0;i<m;i++){
            k=0;
            if(nums1[i]>nums2[k]){
                int temp=nums1[i];
                nums1[i]=nums2[k];
                nums2[k]=temp;
                sort(nums2.begin(),nums2.end());
            }
        }
        
        for(int j=0;j<n;j++){
            nums1[m]=nums2[j];
            m++;
        }
    }
};