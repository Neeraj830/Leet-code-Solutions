class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans=0,l=0,r=nums.size()-1,mid=0;
          int n=nums.size()-1;
    
    
        while(l<=r){
            mid=(l+r)/2;
            if(target==nums[mid]){return mid;}
             if(nums[mid]>nums[n]){
                 if(target>nums[mid]||target<nums[0]){
                     l=mid+1;
                 }else{
                     r=mid-1;
                 }
             }else{
                 if(target<nums[mid]||target>nums[n]){
                     r=mid-1;
                 }else{
                     l=mid+1;
                 }
             }
        }
        
        return -1;
    }
};