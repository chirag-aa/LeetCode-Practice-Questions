class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int first=0;
        int second=0;
        vector<int>result;
        int n1=nums1.size();
        int n2=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        
        while(first<n1 && second<n2){
            if(nums1[first]==nums2[second]){
                result.push_back(nums1[first]);
                first++;
                second++;
            }
            else if(nums1[first]>nums2[second]){
                second++;
            }
            else if(nums1[first]<nums2[second]){
                first++;
            }
        }
        return result;
    }
};