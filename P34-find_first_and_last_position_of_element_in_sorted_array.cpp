class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        vector<int>v;
        v.push_back(-1);
        v.push_back(-1);

        int l=0,r=nums.size()-1,mid=0;
        while(l<=r){
             mid=(l+r)/2;
             if(nums[mid]==t){
                int rt=mid,lt=mid;
               
                while (lt >= 0 && nums[lt] == t) {
                    v[0] = lt--;
                }
                while (rt <= r && nums[rt] == t) {
                    v[1] = rt++;
                }
               return v;
             }else{
                 if(nums[mid]<t){
                     l=mid+1;
                 }else{
                    r=mid-1;
                 }
             }
        }  
        
         return v;
    }
};