int removeDuplicates(vector<int>& nums) {
        int position = 0;
        int currValue = -101;
       
        for(int i=0;i<nums.size();i++){

            if(currValue!=nums[i]){
                currValue= nums[i];
                nums[position++] = currValue;
            }
            else{
                continue;
            }
        }
       return position;
    
        
    }