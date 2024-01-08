class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int p= -1;
        int n = nums.size()-1;
        for(int i=n;i>0;i--){
            if(nums[i-1]<nums[i]){
                p = i-1;
                break;
            }
        }
        for(int i=n;i>p and p!=-1;i--){
            if(nums[i]>nums[p]){
                swap(nums[i],nums[p]);
                break;
            }
        }
        reverse(nums.begin()+p+1,nums.end());
    
    }
};