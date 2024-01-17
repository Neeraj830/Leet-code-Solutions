class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        set<int> s;
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])==mp.end()){
                mp[arr[i]]=1;
            }else{
                mp[arr[i]]++;
            }
        }
        for(auto i : mp ){
            s.insert(i.second);
        }
        return mp.size()==s.size();
    }
    
};