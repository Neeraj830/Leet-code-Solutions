#include<iostream>
#include<vector>
using namespace std;

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

int main(){
    vector<int> v1;
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int l;
    for(int i=0;i<n;i++){
        cin>>l;
        v1.push_back(l);
    }
    cout<<"Size of New array :"<<removeDuplicates(v1)<<endl;
    cout<<"New Array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<v1[i]<<endl;
    }

    return 0;
}